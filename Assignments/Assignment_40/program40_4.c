/*
    Write a recursive program which display below pattern
    Input  : 6
    Outptu : A  B   C   D   E   F
*/
#include<stdio.h>

void Dispaly(int iNo)
{   
    static char cValue = 'A';

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
