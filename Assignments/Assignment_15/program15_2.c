// write a program which accept number from user and return count of odd digits.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Countodd
//  Description :   It is used to count odd digits.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int Countodd(
            int iNo                     // Input
        )
{
    int iDigit = 0;
    int iCount = 0;                     // To store the result
    
    if(iNo < 0)                         // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)                     
    {
        iDigit = iNo%10;
        
        if((iDigit % 2) != 0)                 // Business logic
        {
            iCount++;
        }

        iNo = iNo/10;
    }

    return iCount;

}// End of Countodd function

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
    int iRet = 0;                       // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Countodd(iValue);               // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 3
//  Input : 234511   Output : 4
//  Input : -22267   Output : 1
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
