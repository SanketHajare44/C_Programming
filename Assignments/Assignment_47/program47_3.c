/*
   Sum of digits of each  node
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

void SumDigits(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    int Sum = 0;

    while(temp != NULL)
    {   
        Sum = 0;

        while(temp->data != 0)
        {   
            Sum = Sum + (temp->data % 10);
            temp->data = temp->data / 10;
        }

        printf("%d\t",Sum);

        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,10);
    InsertFirst(&head,-16);
    InsertFirst(&head,102);
    InsertFirst(&head,-45);
    InsertFirst(&head,35);

    Display(head);

    SumDigits(head);

    return 0;
}