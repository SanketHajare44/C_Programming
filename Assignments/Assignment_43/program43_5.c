// Write a program which dispaly all elements which are Display addition of each digits of element from singly linear linked list

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

typedef struct node NOODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NOODE));

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

int AdditionDigit(int iNo)
{
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);

        iNo = iNo / 10;
    }

    return iSum;
}

void SumDigit(PNODE first)
{
    int iRet = 0;

    PNODE temp = first;

    while(temp != NULL)
    {   
        iRet = AdditionDigit(temp->data);
        printf("%d  ",iRet);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 5);
    InsertFirst(&head, 28);
    InsertFirst(&head, 21);
    InsertFirst(&head, 6);

    Display(head);

    SumDigit(head);

    return 0;
}