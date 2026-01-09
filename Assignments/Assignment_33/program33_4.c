/*
    Accept character from user and check whether it is small case or not (a-z)
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
//  Function name : ChkSmall
//  Description :   It is use check whether character is small case or not 
//  Input :         character
//  Output :        boolen
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of ChkSmall

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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("Small case  character\n");
    }
    else
    {
        printf("Not small case  character\n");
    }
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : a         Output : Small case  character
//  Input : H         Output : Not small case  character
//
/////////////////////////////////////////////////////////////////
