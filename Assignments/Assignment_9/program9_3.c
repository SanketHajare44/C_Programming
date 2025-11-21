// Write a program to find even factorial of give number.

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : EvenFactorial
//  Description :   It is gives even number of factorial
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;                              
    int multi = 0;
    multi = 1;

    if(iNo < 0)                                 // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) == 0)
        {
            multi = multi*iCnt;                 // Business logic
        }
    }

    return multi;
}// End of EvenFactorial function

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

    iRet = EvenFactorial(iValue);               // Function call

    printf("Even Factorial of number is : %d\n",iRet);

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 5       Output = 8
//  Input = 6       Output = 48
//  Input = 0       Output = 1
//  Input = -4      Output = 8
//
///////////////////////////////////////////////////////////////////////////////
