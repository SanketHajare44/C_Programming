// Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CircleArea
//  Description :   It is used to Calculate area of circle
//  Input :         Float
//  Output :        Double
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

double CircleArea(
                    float fRadius       // Input
                 )
{
    double dArea = 0.0;                 // To store the result

    dArea = 3.14*fRadius*fRadius;       // Business logic

    return dArea;
}// End of CircleArea function

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

float fValue = 0.0;                     // To accept user input
double dRet = 0.0;                      // To store the result

printf("Enter radius : ");

scanf("%f", &fValue);

dRet = CircleArea(fValue);              // Function call

printf("Area of circle is : %lf\n",dRet);

return 0;
}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6       Output : 113.040000
//  Input : 5.3     Output : 88.202606
//  Input : 10.4    Output : 339.622375
//
/////////////////////////////////////////////////////////////////
