// Write a program which accept number from user and return difference between summmation of all its factors and Non factors.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : FactDiff
//  Description :   It is used display difference between summmation of all its factors and Non factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          18/10/2025
//
/////////////////////////////////////////////////////////////////

int FactDiff(
                int iNo                 // Input
            )
{
    int iCnt = 0;
    int FactSum = 0;                    // To store the result
    int NonFactSum = 0;                 // To store the result
    
    if(iNo < 0)                         // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo%iCnt) == 0)             // Business logic
        {
            FactSum = FactSum + iCnt;
        }
        else
        {
            NonFactSum = NonFactSum + iCnt;
        } 
    }
    
    return FactSum-NonFactSum;
}// End FactDiff Function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;                     // To Accept the user input
    int iRet = 0;                       // To store the result

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);            // Function call

    printf("The summation difference of factors and Non factors is : %d\n",iRet);

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12              Output : -34
//  Input : 10              Output : -29
//  Input : 5               Output : -8
//
/////////////////////////////////////////////////////////////////