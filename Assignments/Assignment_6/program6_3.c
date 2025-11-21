// Write a program which accept two numbers and check whether numbers are equal or not.

/////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function name : ChkEqual
//  Description :   It is used to check numbers are equal
//  Input :         Integer, Integer
//  Output :        Boolean
//  Author :        Sanket Sadashiv Hajare
//  Date :          20/10/2025
//
/////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)                        // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }

}// End of ChkEqual function

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
    int iValue1 = 0;                        // To accept user input1
    int iValue2 = 0;                        // To accept user input2
    bool bRet = false;                      // To store the result

    printf("Please enter two numbers :\n");
    scanf("%d %d",&iValue1,&iValue2);
    
    bRet = ChkEqual(iValue1,iValue2);       // Function call

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
    
}// End of main

/////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 10        Input2 = 10         Output = Equal
//  Input1 = 10        Input2 = 20         Output = Not Equal
//  Input1 = -5        Input2 = -5         Output = Equal
//  Input1 = -10       Input2 = 10         Output = Not Equal
//  Input1 = 0         Input2 = 0          Output = Equal
//
/////////////////////////////////////////////////////////////