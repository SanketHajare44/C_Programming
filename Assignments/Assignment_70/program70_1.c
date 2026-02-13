/*
    Write a recursive program which accepts number from user and display the below pattern
    Input : 5
    1   *   2   *   3   *   4   *   5   *
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo >= 1)
    {
        Display(iNo-1);
        printf("%d\t*\t",iNo);  
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}