/*
    Write a program which accept string from user and count number of white spaces
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountWhite
//  Description :   It is count the white spaces from the string
//  Input :         Character Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////


int CountWhite(char *str)
{
    register int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;

}// End of CountWhite function

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
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("White space count is : %d\n",iRet);
    return 0;

}// End of main function