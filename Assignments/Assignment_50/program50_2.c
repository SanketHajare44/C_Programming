/*
    Display element greater than Avegrage
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

void DisplayGreaterThanAvg(PNODE first)
{
    PNODE temp = first;
    int Sum = 0;
    int Count = 0;
    int Avg = 0;

    while(temp != NULL)
    {   
        Sum = Sum + temp->data;
        Count++;
        temp = temp->next;
    }

    Avg = Sum/Count;
    printf("%d\n",Avg);

    temp = first;
    while(temp != NULL)
    {
        if(Avg < temp->data)
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
    InsertFirst(&head,111);
    InsertFirst(&head,50);
    InsertFirst(&head,310);
    InsertFirst(&head,15);

    Display(head);

    DisplayGreaterThanAvg(head);

    return 0;

}