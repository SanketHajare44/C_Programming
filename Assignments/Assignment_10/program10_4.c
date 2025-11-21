// Write a program which acccept temperature in fharenheit and convert it into celsius.(1 Celsius = (Fahrenheit - 32) * (5/9))

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : FhtoCs
//  Description :   It is used to convert temperature fharenheit into celsius 
//  Input :         Float
//  Output :        Double
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

double FhtoCs(
                float fTemp                     // Input
             )
{   
    double dCelsius = 0.0;                      // To store the result
    dCelsius = ((fTemp - 32) * (5.0/9.0));      // Buisness logic

    return dCelsius;
    
}// End of FhToCs function

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
    float fValue = 0.0f;                           // To accept user input
    double dRet = 0.0;                             // To store the result

    printf("Enter temperature in fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);                       // Function call

    printf("Temperature is celsius is : %lf\n",dRet);

    return 0;
}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10       Output : -12.222222
//  Input : 34       Output : 1.11111
//
/////////////////////////////////////////////////////////////////
