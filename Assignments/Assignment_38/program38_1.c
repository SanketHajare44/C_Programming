/*
    Write a program which accept string from user and copy that characters of 
    that string into another string in reverse order
*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char * temp1 = src;
    char * temp2 = dest;

    while(*temp1 != '\0')
    {   
        temp1++;
    }

    temp1--;

    while(temp1 >= src)
    {
        *temp2 = *temp1;
        temp2++;
        temp1--;
    }

    *temp2 = '\0';
}

int main()
{
    char arr[30] = "Marvellous python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s\n",brr);

    return 0;
}