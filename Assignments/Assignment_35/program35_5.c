/*
     Write a program which accept string from user and display it in reverse order
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Reverse
//  Description :   Used to reverse the string
//  Input :         Character Array
//  Output :        Nothing
//  Author :        Sanket Sadashiv Hajare
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char * temp1 = str;
    char * temp2 = str;
    char ch = '\0';

    while(*temp2 != '\0')
    {   
        temp2++;
    }
    temp2--;


    while(temp1 < temp2)
    {
        ch = *temp1;
        *temp1 = *temp2;
        *temp2 = ch;

        temp1++;
        temp2--;
    }

}

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

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("%s\n",arr);

    return 0;

}// End of main function