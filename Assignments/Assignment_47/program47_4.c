/*
   Display Prime number
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

void DisplayPrime(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    bool bFlag = false;

    while(temp != NULL)
    {   
        bFlag = true;

        for(int i = 2; i <= (temp->data / 2); i++)
        {
            if(temp->data % i == 0)
            {
               bFlag = false; 
            }
        }

        if(bFlag == true)
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
    InsertFirst(&head,2);
    InsertFirst(&head,102);
    InsertFirst(&head,7);
    InsertFirst(&head,35);

    Display(head);

    DisplayPrime(head);

    return 0;
}