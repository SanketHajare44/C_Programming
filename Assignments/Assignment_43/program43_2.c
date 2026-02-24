// Write a program which dispaly all elements which are prime from singly linear linked list

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

void DisplayPrime(PNODE first)
{
    PNODE temp = first;

    while(temp != NULL)
    {   
        for(int i = 2; i <= (temp->data / 2); i++)
        {
            if((temp->data % i) == 0)
            {
                break;
            }

            printf("%d \t",temp->data);
        }

        temp = temp->next;
    }

    printf("\n");
}


int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 5);
    InsertFirst(&head, 28);
    InsertFirst(&head, 21);
    InsertFirst(&head, 6);

    Display(head);

    DisplayPrime(head);

    return 0;
}