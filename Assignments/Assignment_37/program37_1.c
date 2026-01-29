/*
    Write a program which accept string from user and accept one character. Check whether that character is present in string or not
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{   bool flag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            flag = true;
            break;
        }
        str++;
    }

    return flag;
}

int main()
{
    char Arr[30];
    char CValue = '\0';
    bool bRet = false; 

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the character : \n");
    scanf(" %c",&CValue);

    bRet = ChkChar(Arr,CValue);

    if(bRet == true)
    {
        printf("Chracter found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}