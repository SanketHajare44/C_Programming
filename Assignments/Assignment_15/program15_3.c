// write a program which accept number from user and return count of digits in between 3 and 7.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountRange
//  Description :   It is used to count digits between 3 and 7.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int CountRange(
                int iNo                     // Input
              )
{
    int iDigit = 0;
    int iCount = 0;                         // To store the result
    
    if(iNo < 0)                             // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)                     
    {
        iDigit = iNo%10;
        
        if((iDigit > 3) && (iDigit < 7))    // Business logic
        {
            iCount++;
        }

        iNo = iNo/10;
    }

    return iCount;

}// End of CountRange function

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
    int iValue = 0;                         // To accept user input
    int iRet = 0;                           // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);               // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 0
//  Input : 234511   Output : 2
//  Input : -22267   Output : 1
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
