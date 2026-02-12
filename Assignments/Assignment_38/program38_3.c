/*
   Write a program which accept string from user and copy that characters of that string into another string
   by converting all small characters into capital case 
*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32; 
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
{   char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter the String\n");
    scanf("%[^'\n]s",Arr);

    StrCpyCap(Arr,Brr);

    printf("%s\n",Brr);

    return 0;
}