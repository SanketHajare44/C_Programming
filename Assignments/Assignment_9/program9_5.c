// Write a program which return difference between even factorial and odd factorial

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : FactorialDiff
//  Description :   It is gives difference between even factorial and odd factorial
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          23/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int FactorialDiff(
                    int iNo                         // Input
                )
{
    int iCnt = 0;

    int EvenFactorial = 0;
    EvenFactorial = 1;

    int OddFactorial = 0;
    OddFactorial = 1;

    int FactDiff = 0;
    
    if(iNo < 0)                                     // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt%2) == 0)                           // Business logic
        {
            EvenFactorial = EvenFactorial*iCnt;
        }
        else
        {
            OddFactorial = OddFactorial*iCnt;
        }
    }

    FactDiff = EvenFactorial - OddFactorial;

    return FactDiff;
}// End of FactorialDiff function

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
    int iValue = 0;                                     // To accpet user input
    int iRet = 0;                                       // TO store the result

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);                       // Function call

    printf("Factorial difference is %d\n",iRet);

    return 0;;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 5       Output = -7
//  Input = 6       Output = 33
//  Input = 0       Output = 0
//  Input = -4      Output = 5
//
///////////////////////////////////////////////////////////////////////////////
