// Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : RectArea
//  Description :   It is used to calculate area of rectangle 
//  Input :         Float, Float
//  Output :        Double
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

double RectArea(
                    float fWidth,       // Input
                    float fHeight       // Input
                )
{
    double dArea = 0.0;                 // To store the result

    dArea = fWidth*fHeight;             // Buisness logic

    return dArea;
}// End of RectArea function

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

float fValue1 = 0.0, fValue2 = 0.0;     // To accept user input
double dRet = 0.0;                      // To store result

printf("Enter width : ");
scanf("%f", &fValue1);

printf("Enter height : ");
scanf("%f", &fValue2);

dRet = RectArea(fValue1, fValue2);      // Function call

printf("Area of rectangle is : %lf\n",dRet);

return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 8.6  Input :  6.3     Output : 54.180004
//  Input : 5.3  Input :  9.78    Output : 51.834000
//
/////////////////////////////////////////////////////////////////