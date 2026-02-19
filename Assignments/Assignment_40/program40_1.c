/*
    Write a recursive program which display below pattern
    Input  : 5
    Outptu : *   *   *   *   *
*/
#include<stdio.h>

void Dispaly(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    printf("*\t");
    Dispaly(iNo - 1);
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    Dispaly(iValue);

    printf("\n");

    return 0;
}
