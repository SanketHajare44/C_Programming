// write a program which accept number from user and count frquency of such a digits which are less than 6.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Count
//  Description :   It is used to count frquency of less than 6 number
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int Count(
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
        
        if(iDigit < 6)                 // Business logic
        {
            iCount++;
        }

        iNo = iNo/10;
    }

    return iCount;

}// End of Count function

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
    int bRet = 0;                       // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Count(iValue);               // Function call

    printf("%d\n",bRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 3
//  Input : 23453    Output : 5
//  Input : -22267   Output : 3
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
