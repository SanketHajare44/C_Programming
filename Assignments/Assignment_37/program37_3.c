/*
    Write a program which accept string from user and accept one character .
    Return index of first occurrence of that character.
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{   
    int i = 0;
    int Ans = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            Ans = i;
            break;
        }
        str++;
        i++;
    }

    return Ans;
}

int main()
{
    char Arr[30];
    char CValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&CValue);

    iRet = FirstChar(Arr,CValue);
    printf("Index is : %d\n",iRet);
    
    return 0;
}