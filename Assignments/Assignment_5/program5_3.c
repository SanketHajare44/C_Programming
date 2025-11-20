// Check a leap year

/////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name : CheckLeapYear
//  Description :   It is used to check  leap year
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////

void CheckLeapYear(
                    int year                                   // Input
                )
{
    if((year%4) == 0 && ((year%100 != 0) || (year%400) == 0))  // Business logic
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not leap year\n",year);
    }

}// End of CheckLeapYear function

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
    int yr = 0;                     // To  accept user input

    printf("Enter year :\n");
    scanf("%d",&yr);

    CheckLeapYear(yr);              // Function call

    return 0;
}// End of main

/////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 2024         Output = is a leap year
//  Input1 = 2025         Output = is not  leap year
//  Input1 = 2011         Output = is not leap year
//
/////////////////////////////////////////////////////////////