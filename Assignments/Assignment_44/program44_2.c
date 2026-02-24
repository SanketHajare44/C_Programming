// Count Even numbers

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

int Count(PNODE first)
{
    PNODE temp = NULL;
    temp = first;
    int Count = 0;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
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

    InsertFirst(&head, 114);
    InsertFirst(&head, 51);
    InsertFirst(&head, 22);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head);

    printf("Count of Even Number  element from LinkedList : %d\n",iRet);

    return 0;
}