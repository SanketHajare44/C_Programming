/*
    count two digit numbers
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

int CountTwoDigit(PNODE first)
{
    PNODE temp = first;
    int count = 0;
    int TwoDigitNum = 0;

    while(temp != NULL)
    {   
        count = 0;

        while(temp->data != 0)
        {
            temp->data = temp->data / 10;
            count++;
        }
        
        if(count == 2)
        {
          TwoDigitNum++; 
        }

        temp = temp->next;
    }

    return TwoDigitNum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,10);
    InsertFirst(&head,111);
    InsertFirst(&head,50);
    InsertFirst(&head,310);
    InsertFirst(&head,15);

    Display(head);

    iRet = CountTwoDigit(head);

    printf("Count of two digit number is : %d\n",iRet);

    return 0;

}