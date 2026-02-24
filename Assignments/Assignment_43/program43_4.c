// Write a program which dispaly all elements which are Second maximum element from singly linear linked list

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

int SecMaximumNum(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    int Max = 0;
    int SecMax = 0;

    Max = INT_MIN;
    SecMax = INT_MIN;

    if(temp->next == NULL)
    {
        return temp->data;
    }

    while(temp != NULL)
    {
        if(temp->data > Max)
        {
            SecMax = Max;
            Max = temp->data;
            
        }
        else if((temp->data < Max) && (temp->data > SecMax))
        {
            SecMax = temp->data;
        }

        temp = temp->next;
    }

    return SecMax;
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

    iRet = SecMaximumNum(head);

    printf("Second Maximum number is : %d\n",iRet);

    return 0;
}