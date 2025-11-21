// write a program which accept number from user and check whether it contains 0 in it or not

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : ChkZero
//  Description :   It is used to check it contains zero or not
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

bool ChkZero(
                int iNo                 // Input
            )
{
    int iDigit = 0;
    bool bResult = false;
    
    if(iNo < 0)                         // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)                     // Business logic
    {
        iDigit = iNo%10;
        
        if(iDigit == 0)
        {
            bResult = true;
            break;
        }

        iNo = iNo/10;
    }

    return bResult;

}// End of ChkZero function

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
    int iValue = 0;                     // To accept user input
    bool bRet = false;                  // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);             // Function call

    if(bRet == true)
    {
        printf("It contains zero.\n");
    }
    else
    {
        printf("There is no zero.\n");
    }

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : It contains zero.
//  Input : 23453    Output : There is no zero.
//  Input : 5        Output : There is no zero.
//  Input : 0        Output : It contains zero.
//
/////////////////////////////////////////////////////////////////
