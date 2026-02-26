/*
   Display elements at odd positions
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

void DisplayOddPosition(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int pos = 0;

    while(temp != NULL)
    {   
        pos++;

        if(pos % 2 != 0)
        {
            printf("%d \t",temp->data);
        }
    
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,10);
    InsertFirst(&head,2);
    InsertFirst(&head,102);
    InsertFirst(&head,7);
    InsertFirst(&head,35);

    Display(head);
    
    DisplayOddPosition(head);

    return 0;
}