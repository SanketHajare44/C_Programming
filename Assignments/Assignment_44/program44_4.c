// Count Frequency of given numbers

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
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

int Count(PNODE first,int iNo)
{
    PNODE temp = NULL;
    temp = first;
    int Count = 0;

    while(temp != NULL)
    {
        if(temp->data == iNo)
        {
            Count++;
        }

        temp = temp->next;
    }
    
    return Count;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 11);
    InsertFirst(&head, 51);
    InsertFirst(&head, 23);
    InsertFirst(&head, 11);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head,11);

    printf("Frequency of number is : %d\n",iRet);

    return 0;
}