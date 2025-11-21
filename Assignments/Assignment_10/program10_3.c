// Write a program which acccept distance in kilometer and convert it into meter. (1 kilometer = 1000 meter)

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : KmtoMeter
//  Description :   It is used to convert tKilometer into meter 
//  Input :         Float
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int KmtoMeter(
                int iNo                     // Input
             )
{   
    int iMeter = 0;                         // To store the result

    iMeter = (iNo*1000);                    // Buisness logic

    return iMeter;
    
}// End of KmtoMeter function

/////////////////////////////////////////////////////////////////
//
//  Time Compplexity : O(1)
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

    printf("Enter Distance in Km :\n");
    scanf("%i",&iValue);

    iRet = KmtoMeter(iValue);               // Function call

    printf("Distance in meter : %d\n",iRet);

    return 0;
}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output :  5000
//  Input : 12       Output : 12000
//
/////////////////////////////////////////////////////////////////
