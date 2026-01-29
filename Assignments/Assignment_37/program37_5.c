/*
    Write a program which accept string from user reverse that string in place.
*/

#include<stdio.h>

void StrRevX(char *str)
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

int main()
{
    char Arr[30];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("%s\n",Arr);

    return 0;
}