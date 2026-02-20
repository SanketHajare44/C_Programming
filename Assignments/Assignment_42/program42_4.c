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

int SecMaximum(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    int Max = temp->data;
    int SecMax = temp->data;
   
    while(temp != NULL)
    {
        if(Max < temp->data)
        {
            Max = temp->data;
        }
        else if(SecMax < temp->data && Max > temp->data)
        {
            SecMax = temp->data;
        }

        temp = temp->next;
    }

    // temp = first;
    // while(temp != NULL)
    // {
    //     if(Max > temp->data && SecMax < temp->data)
    //     {
    //         SecMax = temp->data;
    //     }
    //     temp = temp->next;
    // }

    return SecMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,10);
    InsertFirst(&head,20);
    InsertFirst(&head,18);
    InsertFirst(&head,5);
    InsertFirst(&head,56);
    InsertFirst(&head,1);

    Display(head);
    
    iRet = SecMaximum(head);
    printf("Second Maximum number is : %d\n",iRet);

    return 0;
}