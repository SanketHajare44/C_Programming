/*
    Find Difference Max - Min
*/

#include<stdio.h>
#include<stdlib.h>

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

int DifferenceOFMinMax(PNODE first)
{
    PNODE temp = first;
    int Min = temp->data;
    int Max = temp->data;

    while(temp != NULL)
    {
        if(Max < temp->data)
        {
            Max = temp->data;
        }

        if(Min > temp->data)
        {
            Min = temp->data;
        }

        temp = temp->next;
    }

    return (Max - Min);
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,10);
    InsertFirst(&head,11);
    InsertFirst(&head,50);
    InsertFirst(&head,30);
    InsertFirst(&head,15);

    Display(head);

    iRet = DifferenceOFMinMax(head);

    printf("%d\n",iRet);

    return 0;

}