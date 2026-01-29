/*
    Write a program which accept string from user and accept one character. Check whether that character is present in string or not
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{   
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(Arr,CValue);
    printf("Count is : %d\n",iRet);
    
    return 0;
}