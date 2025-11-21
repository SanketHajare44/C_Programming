// Write a program to find Factorial of given number.

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Factorial
//  Description :   It is use to display Factorial of number.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;                              // To store the result
    iFact = 1;

    if(iNo < 0)                                 // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)  
    {
        iFact = iFact*iCnt;                     // Business logic
    }
    return iFact;
}// End of Factorial function

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
    int iValue = 0;                             // To accept user input
    int iRet = 0;                               // To store the result

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);                   // Function call

    printf("Factorial of number is : %d\n",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 0       Output = 1
//  Input = 1       Output = 1
//  Input = 4       Output = 24
//  Input = -5      Output = 120
//
///////////////////////////////////////////////////////////////////////////////

