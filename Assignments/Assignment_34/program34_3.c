/*
    Accept character from user and. if it is capital then display all the character from 
    the input chearacters till Z. if input character is small then print all the characters
    in reverse order till a. In other cases return directly
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : ChkCapital
//  Description   : Displays character sequence based on input
//  Input         : Character
//  Output        : nothing
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

void ChkCapital(char ch)
{
    char cValue = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cValue = ch; cValue <= 'Z'; cValue++)
        {
            printf("%c\t", cValue);
        }
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cValue = ch; cValue >= 'a'; cValue--)
        {
            printf("%c\t", cValue);
        }
        printf("\n");
    }
    else
    {
        
        return;
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';

    printf("Enter the character : ");
    scanf(" %c", &ch);   // space before %c avoids newline issue

    ChkCapital(ch);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Test cases
//
//  Input : Q   Output : Q R S T U V W X Y Z
//  Input : j   Output : j i h g f e d c b a
//  Input : @   Output : (no output)
//  Input : 4   Output : (no output)
//
/////////////////////////////////////////////////////////////////
