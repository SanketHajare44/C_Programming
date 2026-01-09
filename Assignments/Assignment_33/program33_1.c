
/*
    Accept character from user and check whether it is alphabet or not (A-Z a-z)
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
//  Function name : ChkAlpha
//  Description :   It is use check whether it is alphabet
//  Input :         chracter 
//  Output :        boolen
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

bool ChkAlpha(char ch)
{
    if((ch>='a' && ch<= 'z') || (ch>='A' && ch<='Z'))   // Business logic
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of ChkAlpha

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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not a character\n");
    }
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : H         Output : It is character
//  Input : @         Output : It is not a character
//
/////////////////////////////////////////////////////////////////
