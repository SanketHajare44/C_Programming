/*
    Replace negative number with absolute value
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

void MakeAbsoulte(PNODE first)
{
    PNODE temp = first;

    while(temp != NULL)
    {   
        if(temp->data < 0)
        {
            temp->data = -temp->data;
        }

        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,10);
    InsertFirst(&head,-111);
    InsertFirst(&head,50);
    InsertFirst(&head,-310);
    InsertFirst(&head,15);

    Display(head);

    MakeAbsoulte(head);

    Display(head);

    return 0;

}