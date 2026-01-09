/*
    Accept character from user and check whether it is
    a special symbol or not (!,@,#,$,%,^,&,*)
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : ChkSpecial
//  Description   : Checks whether character is special symbol
//  Input         : Character
//  Output        : Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

int ChkSpecial(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return 0;
    }
    else if(ch >= '0' && ch <= '9')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}// end of ChkSpecial

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    int bRet = 0;

    printf("Enter the character : ");
    scanf(" %c", &ch);   // space before %c avoids newline issue

    bRet = ChkSpecial(ch);

    if(bRet == 1)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Test cases
//
//  Input : Q   Output : false
//  Input : @   Output : true
//  Input : j   Output : false
//  Input : 4   Output : false
//
/////////////////////////////////////////////////////////////////
