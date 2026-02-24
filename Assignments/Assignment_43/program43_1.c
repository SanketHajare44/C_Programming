// Write a program which dispaly all elements which are perfect from singly linear linked list

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

void Perfect(PNODE first)
{
    PNODE temp = first;
    int Sum = 0;


    while(temp != NULL)
    {   Sum = 0;
        for(int i = 1; i <= (temp->data / 2); i++)
        {
            if((temp->data % i) == 0)
            {
                Sum = Sum + i;
            }

        }

        if(temp->data == Sum)
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

    InsertFirst(&head, 496);
    InsertFirst(&head, 28);
    InsertFirst(&head, 21);
    InsertFirst(&head, 6);

    Display(head);

    Perfect(head);

    return 0;
}