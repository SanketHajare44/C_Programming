/*
    Accept character from user and check whether it is digit or not (0-9)
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : ChkDigit
//  Description :   It is use check whether character is digit 
//  Input :         character
//  Output :        boolen
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{
    if (ch >= 48 && ch <= 57)
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of ChkDigit

/////////////////////////////////////////////////////////////////
//  Time Complexity : O(1)
/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
//  Entry point function for the application
/////////////////////////////////////////////////////////////////

int main()
{   
    char cValue = '\0';                 // Accept user input
    bool bRet = false;                  // Store the result

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("Not a digit\n");
    }
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 3         Output : It is Digit
//  Input : h         Output : not a Digit
//
/////////////////////////////////////////////////////////////////
