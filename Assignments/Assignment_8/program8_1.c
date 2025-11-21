/* Write a program which Accept number from user and  if number is less than 50 then
print small , if it is greater than 50 and leass than 100  then print medium, if it is
greater than 100 then print large */

///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Number
//  Description :   It is use to Print small, medium, large as per the the number range.
//  Input :         Integer
//  Output :        Void
//  Author :        Sanket Sadashiv Hajare
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)                        // Business logic
    {
        printf("Small\n");
    }
    else if(iNo>=50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }

}// End of Number function

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
    int iValue = 0;                 // TO accept user input

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Number(iValue);                 // Function call

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 25       Output = small
//  Input = 50       Output = medium
//  Input = 99       Output = medium
//  Input = 100      Output = large
//  Input = 150      Output = large
//  Input = 0        Output = small
//  Input = -10      Output = small
//
///////////////////////////////////////////////////////////////////////////////
