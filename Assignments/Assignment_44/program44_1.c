// Search an Element

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE; 

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else 
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    PNODE temp = first;

    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }

    printf("| NULL |\n");
}

bool Search(PNODE first, int iNo)
{
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    bRet = Search(head,51);

    if(bRet == true)
    {
        printf("Number is Present\n");
    }
    else
    {
        printf("Number is not Present\n");
    }

    return 0;
}