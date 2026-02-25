/*
    First occurence position
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

int FirstOccure(PNODE first,int iNo)
{
    PNODE temp = NULL;
    temp = first;
    int pos = 0;

    while(temp != NULL)
    {
        pos++;

        if(temp->data == iNo)
        {
            return pos;    
        }

        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);
    InsertFirst(&head, 11);
    InsertFirst(&head, 10);

    Display(head);

    iRet = FirstOccure(head,11);

    if(iRet == 0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Podition is : %d\n",iRet);
    }

    return 0;
}