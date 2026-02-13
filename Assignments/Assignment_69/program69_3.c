/*
    Write a recursive program which display below pattern
    Input : 5
    5   4   3   2   1
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        printf("%d\t",iNo);
        Display(iNo - 1); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    printf("\n");

    return 0;
}