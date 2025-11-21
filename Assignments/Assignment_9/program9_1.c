// Write a program which accept N number from user and display pattern N number * and N number #

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is use to display pattern N number * and N number #
//  Input :         Integer
//  Output :        Void
//  Author :        Sanket Sadashiv Hajare
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)      // Business logic
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)       // Business logic
    {
        printf("#\t");
    }

    printf("\n");

}// End of Display function

///////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N)
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // To accpet user input

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);                        // Function call

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 5       Output = *   *   *   *   *   #   #   #   #   #
//  Input = -3      Output = *   *   *   #   #   #
//  Input = 0       Output = 
//  Input = 1       Output = *   #
//
///////////////////////////////////////////////////////////////////////////////
