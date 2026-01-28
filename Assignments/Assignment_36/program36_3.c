// Write a program which accept string from user and toggle the case.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : strtoggleX
//  Description :   convert the lower to upper case and upper to Lower case
//  Input :         Character Array
//  Output :        nothing
//  Author :        Sanket Sadashiv Hajare
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////


void strtoggleX(char *str)
{
    register int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;   
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32; 
        }

        str++;
    }

}// End of strtoggleX function

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
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    strtoggleX(arr);
    printf("%s\n",arr);

    return 0;

}// End of main function