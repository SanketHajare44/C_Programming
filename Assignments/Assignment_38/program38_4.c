/*
    Write a program which accept string from user and copy that characters of that string 
    into another string by converting akk capitalc charcters into small case
*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }

        src++;
        dest++;
    }

    *dest = '\0'; 
}

int main()
{
    char Arr[30] = "Marvellous Python 2";
    char Brr[30] = {'\0'};

    StrCpySmall(Arr,Brr);

    printf("%s\n",Brr);

    return 0;
}