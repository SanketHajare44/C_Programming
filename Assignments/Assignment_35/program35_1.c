// Write a program which accept string from user and count number of capital characters.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountCapital
//  Description :   It is used to count capital characters
//  Input :         Character Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////


int CountCapital(char*str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}// End of CountCapital function

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

    iRet = CountCapital(arr);
    printf("%d\n",iRet);

    return 0;

}// End of main function