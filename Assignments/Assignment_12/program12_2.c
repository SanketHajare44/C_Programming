// count total factors of a number

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Count_Factors
//  Description :   It is used to Count the factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int Count_Factors(
                    int number                  // Input
                 )
{
    int iCnt = 0;                               // Loop counter
    int iCount = 0;                             // To store the result

    if(number < 0)                              // Updater
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)   // Business logic
    {
        if((number%iCnt) == 0)
        {
            iCount++;
        }
    }
    printf("\n");

    return iCount;
}// End of Count_Factors function

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
    
    iRet = Count_Factors(iValue);               // Function call

    printf("Total factor is : %d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 3
//  Input : 23      Output : 1
//  Input : -18     Output : 5
//
/////////////////////////////////////////////////////////////////
