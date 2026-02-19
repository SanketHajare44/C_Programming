/*
    Write a recursive program which display below pattern
    Input  : 6
    Outptu : a  b   c   d   e   f
*/
#include<stdio.h>

void Dispaly(int iNo)
{   
    static char cValue = 'a';

    if(iNo == 0)
    {
        return;
    }
    
    printf("%c\t",cValue);
    cValue++;
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
