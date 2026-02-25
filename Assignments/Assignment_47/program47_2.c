/*
   Count digits of each number
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

void CountDigits(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    int iCount = 0;

    while(temp != NULL)
    {   
        iCount = 0;

        while(temp->data != 0)
        {   
            iCount++;
            temp->data = temp->data / 10;
        }

        printf("%d\t",iCount);

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

    CountDigits(head);

    return 0;
}