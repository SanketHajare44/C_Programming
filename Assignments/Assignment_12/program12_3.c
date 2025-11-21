// Sum of all factors of a number

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Sum_of_Factors
//  Description :   It is used to display addition of Factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int Sum_of_Factors(
                    int number                  // Input
                  )
{
    int iCnt = 0;                               // Loop counter
    int iSum = 0;                               // To store the result

    if(number < 0)                              // Updater
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)   // Business logic
    {
        if((number%iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    printf("\n");

    return iSum;
}// End of Sum_of_Factors function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N/2)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;                             // To accept user input
    int iRet = 0;                               // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = Sum_of_Factors(iValue);               // Function call

    printf("Addition of all factor is : %d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 8
//  Input : 23      Output : 1
//  Input : -18     Output : 21
//
/////////////////////////////////////////////////////////////////
