// Accept one charcter from user and convert case of that character.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : DisplayConvert
//  Description :   It is used to convert case of the character
//  Input :         Charaacter
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          17/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')          // Business logic
    {
        printf("%c\n",cValue + 32);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n",cValue - 32);
    }
    else
    {
        printf("It is not chacracter\n");
    }

}// End DisplayConvert Function

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
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);             // Function call

    return 0;

}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : A     Output : a
//  Input : b     Output : B
//
/////////////////////////////////////////////////////////////////
