/*
    Write a program which accept string from user and Display only
    digits from that string
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Description :   print only digits from the string
//  Input :         Character Array
//  Output :        nothing
//  Author :        Sanket Sadashiv Hajare
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////


void DisplayDigit(char *str)
{
    register int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }

        str++;
    }

}// End of DisplayDigit function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(n)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;

}// End of main function