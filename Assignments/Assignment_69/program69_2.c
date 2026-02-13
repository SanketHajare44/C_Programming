/*
    Write a recursive program which display below pattern
    Input : 5
    1   2   3   4   5
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        Display(iNo - 1);
        printf("%d\t",iNo);
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