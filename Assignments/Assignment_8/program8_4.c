// Write a program which accept number from user and display its table.

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Table
//  Description :   It is use to display table of input number.
//  Input :         Integer
//  Output :        Void
//  Author :        Sanket Sadashiv Hajare
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo*iCnt);            // Business logic
    }
    printf("\n");
}// End of Table function

///////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // TO accept user input

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Table(iValue);                          // Function call

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 5       Output = 5   10   15   20   25   30   35   40   45   50
//  Input = -3      Output = 3   6    9    12   15   18   21   24   27   30
//  Input = 0       Output = 0   0    0    0    0    0    0    0    0    0
//  Input = 1       Output = 1   2    3    4    5    6    7    8    9    10
//
///////////////////////////////////////////////////////////////////////////////
