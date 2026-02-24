// Write a program which dispaly all elements which are return addition of all even elements from singly linear linked list

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

int SummationOfEven(PNODE first)
{
    PNODE temp = first;
    int sum = 0;

    while(temp != NULL)
    {   
        if((temp->data % 2) == 0)
        {
            sum = sum + temp->data;
        }

        temp = temp->next;
    }

    return sum;
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

    iRet = SummationOfEven(head);

    printf("Addition of Even elements is : %d\n",iRet);

    return 0;
}