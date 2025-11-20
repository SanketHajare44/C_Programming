// Check positive ,negative ,or zero

/////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name : CheckNumberType
//  Description :   It is used to check positive ,negative ,or zero number
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////

void CheckNumberType(
                        int num                     // Input
                    )
{
    if(num < 0)
    {
        printf("%d is a Negative number\n",num);
    }
    else if(num == 0)                               // Business logic
    {
        printf("%d is a Zero number\n",num);
    }
    else
    {
        printf("%d is a Positive number\n",num);
    }
}// End of CheckNumberType function

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
    int number = 0;                             // To accept user input

    printf("Enter number :\n");
    scanf("%d",&number);

    CheckNumberType(number);                    // function call

    return 0;
}// End of main

/////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 0        Output = 0 is a Zero number
//  Input1 = 104      Output = 104 is a Positive number
//  Input1 = -2       Output = 2  is a Negative number
//
/////////////////////////////////////////////////////////////