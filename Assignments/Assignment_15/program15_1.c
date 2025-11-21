// write a program which accept number from user and return count of even digits.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Description :   It is used to count even digits.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int CountEven(
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
        
        if((iDigit % 2) == 0)                 // Business logic
        {
            iCount++;
        }

        iNo = iNo/10;
    }

    return iCount;

}// End of CountEven function

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

    iRet = CountEven(iValue);               // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 1
//  Input : 23453    Output : 2
//  Input : -22267   Output : 4
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
