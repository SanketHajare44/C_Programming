// Find sum of first N even number

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : sum_even_numbers
//  Description :   It is used to display addition of first N even number 
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int sum_even_numbers(
                        int limit              // Input
                    )
{
    int iCnt = 0;                              // Loop counter
    int iSum = 0;                              // To store the result

    for(iCnt = 1; iCnt <= limit; iCnt++)        
    {   
        iSum = iSum + (2*iCnt);                // Business logic
    }

    return iSum;

}// End of sum_even_numbers function

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

    iRet = sum_even_numbers(limit);            // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10       Output : 110
//  Input : 30       Output : 930
//  Input : 5        Output : 30
//
/////////////////////////////////////////////////////////////////
