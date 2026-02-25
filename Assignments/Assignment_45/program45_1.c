/*
    Display only odd elements
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

void DisplayOdd(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        if(temp->data % 2 != 0)
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

    InsertFirst(&head, 101);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);
    InsertFirst(&head, 50);
    InsertFirst(&head, 10);

    Display(head);

    DisplayOdd(head);

    return 0;
}