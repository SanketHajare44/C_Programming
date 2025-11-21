// Write a program which accept one number from user and check whether that number is greater than 100 or not.

/////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name : ChkGreater
//  Description :   It is used to check number is greater than 100 or not
//  Input :         Integer
//  Output :        Boolean
//  Author :        Sanket Sadashiv Hajare
//  Date :          20/10/2025
//
/////////////////////////////////////////////////////////////


bool ChkGreater(int num)
{
    if(num>100)                     // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }

}// End of ChkGreater function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////  


int main()
{
    int iValue = 0;                 // TO accept user input

    bool bRet  = false;             // To store the result

    printf("Please enter nummber :\n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);      // Function call

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;

}// End of main

/////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 50      Output = Smaller
//  Input = 100     Output = Smaller
//  Input = 101     Output = Greater
//  Input = -10     Output = Smaller
//  Input = 999     Output = Greater
//
/////////////////////////////////////////////////////////////