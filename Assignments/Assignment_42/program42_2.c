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

int IsPrime(int iNo)
{
    int i = 0;

    for(i = 2; i <= (int)(iNo/2); i++)
    {
        if(iNo % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void DisplayPrime(PNODE first)
{
    PNODE temp = first;
    int iRet = 0;

    while(temp != NULL)
    {   
        iRet = IsPrime(temp->data);
        if(iRet == 1)
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

    InsertFirst(&head,4);
    InsertFirst(&head,7);
    InsertFirst(&head,13);
    InsertFirst(&head,3);

    Display(head);
    
    DisplayPrime(head);

    return 0;
}