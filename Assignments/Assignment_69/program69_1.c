/*
    Write a recursive program which display below pattern
    Input : 5
    *   *   *   *   *
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("*\t");
        
        Display(iNo - 1);
    }
    else
    {
        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}