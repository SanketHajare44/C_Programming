/*
    Write a recursive program which accept input from user and display below pattern
    Input : 5
    Output : 1   *   2   *   3   *   4   *   5   *
*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        return;
    }
    Display(iNo - 1);
    printf("%d\t*\t",iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0;
}