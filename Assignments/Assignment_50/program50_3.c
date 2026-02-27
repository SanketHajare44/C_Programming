/*
    Check whether is list is sorted or not (Ascending order)
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
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
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }

    printf("| NULL |\n");
}

bool checkSorted(PNODE first)
{
    PNODE temp = first;
    
    while(temp->next != NULL)
    {
        if(temp->data > temp->next->data)
        {
            return false;
        }

        temp = temp->next;
    }

    return true;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,1);

    Display(head);

    bRet = checkSorted(head);

    if(bRet == true)
    {
        printf("Linked list is sorted\n");
    }
    else
    {
        printf("Linked list is not sorted\n");
    }

    return 0;

}