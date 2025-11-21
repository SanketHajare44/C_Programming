// Write a program which accept three numbers and print its multiplication.

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Multiply
//  Description :   It is perform multiplication of three numbers
//  Input :         Integer, Integer, Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          20/10/2025
//
///////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    return iNo1*iNo2*iNo3;              // Business logic

}// End of Multiply function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////  

int main()
{
    int iValue1 = 0;                    // To accept the user input1
    int iValue2 = 0;                    // To accept the user input2
    int iValue3 = 0;                    // To accept the user input3

    int iRet = 0;                       // To store the result

    printf("Please enter three numbers :\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);   // Function call

    printf("Multiplication is : %d\n",iRet);

    return 0;

}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 10     Input2 = 20     Input3 = 3       Output = Multiplication is : 600
//  Input1 = -5     Input2 = 4      Input3 = 2       Output = Multiplication is : -40
//  Input1 = -3     Input2 = -2     Input3 = 5       Output = Multiplication is : 30
//  Input1 = 0      Input2 = 50     Input3 = 100     Output = Multiplication is : 0
//  Input1 = 1      Input2 = 1      Input3 = 1       Output = Multiplication is : 1
//
///////////////////////////////////////////////////////////////////////////////
