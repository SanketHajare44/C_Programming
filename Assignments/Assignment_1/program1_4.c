// Accept one number and check whether is divisible by 5 or not.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Description :   It is used Display number is divisible by 5 or not 
//  Input :         
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo%5) == 0)                    // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }
}// End Check Function

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
    int iValue = 0;                     // To accept user input
    bool bRet = false;                  // To store the result

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);               // Function call

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 100   Output : Divisible by 5
//  Input : 13    Output : Not Divisible by 5
//
/////////////////////////////////////////////////////////////////
