/*
    Incement each node by 1
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

void IncementAll(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        temp->data = temp->data + 1;
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

    IncementAll(head);

    Display(head);

    return 0;
}