//Write aprogram which accept toatal marks & obtained marks from user and calculate percentage

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Multiply
//  Description :   It is use to calculate percentage
//  Input :         Integer, Integer
//  Output :        Float
//  Author :        Sanket Sadashiv Hajare
//  Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{   
    float fPercent = 0.0f;                          // To store the result

    if(iNo2 == 0)
    {
        return fPercent;
    }
    else
    {
        fPercent = ((float)iNo2/(float)iNo1)*100;   // Business logic
        return fPercent;
    }

}// End of Percentage function

///////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
///////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;                                // To accept user input1
    int iValue2 = 0;                                // To accept user input2

    float fRet = 0.0f;                              // To store the result

    printf("Please enter toatal marks :\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);             // Function call

    printf("Percentage is : %f\n",fRet);

    return 0;

}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 100     Input2 = 50        Output = Percentage is : 50.000000
//  Input1 = 200     Input2 = 150       Output = Percentage is : 75.000000
//  Input1 = 80      Input2 = 40        Output = Percentage is : 50.000000
//  Input1 = 500     Input2 = 500       Output = Percentage is : 100.000000
//  Input1 = 100     Input2 = 0         Output = Percentage is : 0.000000
//
///////////////////////////////////////////////////////////////////////////////
