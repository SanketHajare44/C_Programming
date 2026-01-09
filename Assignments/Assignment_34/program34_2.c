/*
    Accept character from user and. if Character is small  display its corresponding
    capital character and if it small then display its corresponding capital .In other
     cases diaplay as it is
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   Converts small to capital and vice versa
//  Input :         Character 
//  Output :        nothing
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cValue = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        cValue = ch + 32;
        printf("%c\n", cValue);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cValue = ch - 32;
        printf("%c\n", cValue);
    }
    else
    {
        printf("%c\n", ch);
    }
}// End of Display

/////////////////////////////////////////////////////////////////
//  Time Complexity : O(1)
/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
//  Entry point function for the application
/////////////////////////////////////////////////////////////////

int main()
{   
    char ch = '\0';

    printf("Enter the character : ");
    scanf(" %c", &ch);

    Display(ch);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : a         Output : A
//  Input : C         Output : c
//
/////////////////////////////////////////////////////////////////
