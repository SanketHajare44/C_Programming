// Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>

void PrintEven(int iNo)
{   
    int iCnt = 0;
    iCnt = 2;

    int EvenCnt = 0;
    EvenCnt = 1;
    
    if(iNo<=0)
    {
        return;
    }

    while(EvenCnt <= iNo)
    {
        if((iCnt%2) == 0)
        {
            printf("%d\t",iCnt);
            EvenCnt++;
        }
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}