// Write a program which accept number from user and display its table in reverse order.

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Table
//  Description :   It is use to display  reverse order table of input number.
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

    for(iCnt = 10; iCnt >=1; iCnt--)
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
    int iValue = 0;                         // To accept user input

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Table(iValue);                          // Function call

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 5       Output = 50   45   40   35   30   25   20   15   10   5
//  Input = -3      Output = 30   27   24   21   18   15   12   9    6    3
//  Input = 0       Output = 0    0    0    0    0    0    0    0    0    0
//  Input = 1       Output = 10   9    8    7    6    5    4    3    2    1
//
///////////////////////////////////////////////////////////////////////////////
