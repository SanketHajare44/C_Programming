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
        printf("|%d|-",temp->data);
        temp = temp->next;
    }

    printf("->|NULL|\n");
}


void DisplayPerfect(PNODE first)
{
    PNODE temp = first;

    while(temp != NULL)
    {
        int Sum = 0;

        for(int i = 1; i <= (int)(temp->data)/ 2; i++)
        {
            if(temp->data % i == 0)
            {
                Sum = Sum + i;
            }

        }
        if(Sum == temp->data)
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

    InsertFirst(&head,28);
    InsertFirst(&head,21);
    InsertFirst(&head,13);
    InsertFirst(&head,28);

    Display(head);
    
    DisplayPerfect(head);

    return 0;
}