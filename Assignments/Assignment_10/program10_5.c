// Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 square meter)

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : SquareMeter
//  Description :   It is used to convert square feet into square meter
//  Input :         Integer
//  Output :        Double
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

double SquareMeter(
                    int iNo                    // Input
                  )
{   
    double dSqMeter = 0.0;                     // To store the result

    dSqMeter = (double)iNo * 0.0929;           // Buisness logic

    return dSqMeter;
}// End of SquareMeter function

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
    int iValue = 0;                             // To accept user input
    double dRet = 0.0;                          // To store the result

    printf("Enter area in square feet :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);                       // Function call

    printf("Area in square meter is : %lf\n",dRet);

    return 0;
}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5       Output : 0.464500
//  Input : 7       Output : 0.650300
//
/////////////////////////////////////////////////////////////////
