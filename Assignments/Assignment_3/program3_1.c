// Write a program which accept one number from user and print that number of even numbers on screen.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : PrintEven
//  Description :   It is used to print that input number of even numbers on screen 
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          17/10/2025
//
/////////////////////////////////////////////////////////////////

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
        if((iCnt%2) == 0)               // Business logic
        {
            printf("%d\t",iCnt);
            EvenCnt++;
        }
        iCnt++;
    }
    printf("\n");

}// End PrintEven Function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);                  // Function call

    return 0;

}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 5    Output : 2    4    6    8    10
//
/////////////////////////////////////////////////////////////////
