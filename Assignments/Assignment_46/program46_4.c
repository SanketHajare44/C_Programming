/*
    Replace negative number with zero
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node* next;
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

void ReplaceNegative(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data < 0)
        {
            temp->data = 0;
        }

        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head,10);
    InsertFirst(&head,-16);
    InsertFirst(&head,102);
    InsertFirst(&head,-45);
    InsertFirst(&head,35);

    Display(head);

    ReplaceNegative(head);

    Display(head);

    return 0;
}