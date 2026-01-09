/*
    Accept character from user and check whether it is Capital or not (A-Z)
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
//  Function name : ChkCapital
//  Description :   It is use check whether alphabet is is Capital 
//  Input :         chracter 
//  Output :        boolen
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

bool ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}// End of ChkCapital

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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is capital character\n");
    }
    else
    {
        printf("It is not capital character\n");
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
