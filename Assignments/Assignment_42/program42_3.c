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
        printf("| %d | - ",temp->data);
        temp = temp->next;
    }

    printf("> | NULL |\n");
}

int Addition(PNODE first)
{
    PNODE temp = NULL;
    int EvenSum = 0;

    temp = first;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
        {
            EvenSum = EvenSum + temp->data;
        }

        temp = temp->next;
    }

    return EvenSum;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,1);
    InsertFirst(&head,2);
    InsertFirst(&head,3);
    InsertFirst(&head,4);
    InsertFirst(&head,5);
    InsertFirst(&head,6);
    InsertFirst(&head,7);

    Display(head);
    
    iRet = Addition(head);
    printf("Addition of even element is : %d\n",iRet);

    return 0;
}