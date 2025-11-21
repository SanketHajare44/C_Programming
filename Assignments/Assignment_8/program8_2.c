// Accept single digit number from user and print it into word.


///////////////////////////////////////////////////////////////////////////////
//
//  Requied header files
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is use to Print digit number into word.
//  Input :         Integer
//  Output :        Void
//  Author :        Sanket Sadashiv Hajare
//  Date :          22/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{   
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)                         // Business logic
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default :
            printf("Invalid number\n");
    }
}// End of Display function

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
    int iValue = 0;                     // To accept user input

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Display(iValue);                    // Function call

    return 0;
}// End of main

///////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input = 7       Output = Seven
//  Input = -4      Output = Four
//  Input = 0       Output = Zero
//  Input = 12      Output = Invalid number
//
///////////////////////////////////////////////////////////////////////////////

