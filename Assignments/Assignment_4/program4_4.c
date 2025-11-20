// Write a program which accept number from user and return summation of its all non factors

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : SumNonFact
//  Description :   It is used display summation of non factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          18/10/2025
//
/////////////////////////////////////////////////////////////////

int SumNonFact(
                int iNo             // Input
            )
{
    int iCnt = 0;
    int sum = 0;                    // To store the result
    
    if(iNo < 0)                     // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)         // Business logic
        {
            sum = sum + iCnt;
        } 
    }
    
    return sum;
}// End SumNonFact Function

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
    int iValue = 0;                 // To accept user input
    int iRet = 0;                   // To store the result

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);      // Function call

    printf("The sum of Non factors is : %d\n",iRet);

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12               Output : 50
//  Input : 10               Output : 37
//
/////////////////////////////////////////////////////////////////