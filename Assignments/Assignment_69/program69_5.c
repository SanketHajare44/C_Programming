/*
    Write a recursive program which display below pattern
    Input : 6
    a   b   c   d   e   f
*/

#include<stdio.h>

void Display(int iNo)
{
    static char cvalue = 'a';
    if(iNo >= 1)
    {
        printf("%c\t",cvalue);
        cvalue = cvalue + 1;
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