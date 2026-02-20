/*
    Write a recursive program which accept input from user and Count the number of characters
    Input : hello
    Output : 5
*/

#include<stdio.h>

int Display(char Brr[])
{
    if(*Brr == '\0')
    {
        return 0;
    }

    return 1 + Display(Brr + 1);
}

int main()
{
    char sValue[20] = {'\0'};
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%[^'\n']s",sValue);

    iRet = Display(sValue);
    printf("Summation of digit is  : %d\n",iRet);

    return 0;
}