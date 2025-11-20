// check Even or Odd

/////////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Description :   It is used to check Even or Odd
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////////

void CheckEvenOdd(
                    int iNum                    // Input
                 )
{
    if((iNum%2) == 0)                           // Buisness logic
    {
        printf("%d is a even number.\n",iNum);
    }
    else
    {
        printf("%d is a odd number.\n",iNum);
    }
}// End CheckEvenOdd Function

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
    int number = 0;                             // To accept user input

    printf("Enter the number :\n");
    scanf("%d",&number);

    CheckEvenOdd(number);                       // Method call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10       Output (on screen): 10 is a even number
//  Input : 7        Output (on screen): 7 is a odd number
//  Input : 0        Output (on screen): 0 is a even number
//  Input : -4       Output (on screen): -4 is a even number
//  Input : -9       Output (on screen): -9 is a odd number
//
/////////////////////////////////////////////////////////////////
