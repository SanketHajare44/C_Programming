// Program to divide two numbers.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Divide
//  Description :   It is used to divide two numbers
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

int Divide(
            int iNo1,                   // Input1
            int iNo2                    // Input2
          )
{
    int iAns = 0;                       // To store the result

    if(iNo2 == 0)
    {
        return 0;
    }

    iAns = iNo1 / iNo2;                 // Business logic

    return iAns;
}// End Divide Function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;      // To accept user input 
    int iRet = 0;                       // To store result

    iRet = Divide(iValue1,iValue2);     // Function call

    printf("Division is %d\n",iRet);

    return 0;
}// End main function


/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12  Input : 2      Output : 6
//  Input : 9   Input : 9      Output : 1
//  Input : 10  Input : 0      Output : 0
//  Input : 90  Input : 45     Output : 2
//
/////////////////////////////////////////////////////////////////