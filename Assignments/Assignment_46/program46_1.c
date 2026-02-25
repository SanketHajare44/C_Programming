/*
    Display Elements greater than x
*/

#include<stdio.h>
#include<stdlib.h>

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

void DisplayGreater(PNODE first, int iNo)
{
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data > iNo)
        {
            printf("%d\t",temp->data);
        }

        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,16);
    InsertFirst(&head,102);
    InsertFirst(&head,45);
    InsertFirst(&head,35);

    Display(head);

    DisplayGreater(head,35);

    return 0;
}