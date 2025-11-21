// Find sum of first Natural number

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : sum_natural_numbers
//  Description :   It is used to display addition of first natural number 
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int sum_natural_numbers(
                            int limit           // Input
                        )
{
    int iCnt = 0;                               // Loop counter
    int iSum = 0;                               // To store the result

    for(iCnt = 1; iCnt <= limit; iCnt++)        
    {   
        iSum = iSum + iCnt;                     // Business logic
    }

    return iSum;

}// End of sum_natural_numbers function

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
    int limit = 0;                             // To accept user input
    int iRet = 0;                              // To store the result

    printf("Enter limit : \n");
    scanf("%d",&limit);

    iRet = sum_natural_numbers(limit);         // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 55
//  Input : 17      Output : 153
//  Input : 9       Output : 45
//
/////////////////////////////////////////////////////////////////
