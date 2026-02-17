// Accept number from user and check whether number is even or odd.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is used to check number is Even or Odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if((iNo%2) == 0)                // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;                 // To accept user input
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);       // Function call

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 7     Output : is odd number 
//  Input : 10    Output : is even number
//
/////////////////////////////////////////////////////////////////

