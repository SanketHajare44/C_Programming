/*
    Write a program which  accept string from user and copy that characters of that string into another 
    String by removing all white spaces.
*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    char * temp1 = src;
    char * temp2 = dest;

    while(*temp1 != '\0')
    {

        if(*temp1 != ' ')
        {
            *temp2 = *temp1;
            temp2++;
        }

        temp1++;
    }

    *temp2 = '\0';
}

int main()
{
    char arr[30] = "Marvel  lous Pyth  on";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s\n",brr);
    return 0;
}