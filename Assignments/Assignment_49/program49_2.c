/*
    Check whether all elements are positive
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

    printf("\n");
}

bool CheckAllPositive(PNODE first)
{
    PNODE temp = first;

    while(temp != NULL)
    {
        if(temp->data < 0)
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

    InsertFirst(&head,10);
    InsertFirst(&head,-11);
    InsertFirst(&head,50);
    InsertFirst(&head,30);
    InsertFirst(&head,15);

    Display(head);

    bRet = CheckAllPositive(head);

    if(bRet == true)
    {
        printf("All nodes are positive\n");
    }
    else
    {
        printf("All nodes are not positive\n");
    }

    return 0;

}