/*
    Write a recursive program which display below pattern
    Input  : 5
    Outptu : 1  2   3   4   5
*/
#include<stdio.h>

void Dispaly(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    Dispaly(iNo - 1);
    printf("%d\t",iNo);
    
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
