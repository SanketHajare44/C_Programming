/*
    Write a recursive program which accepts string from user and count number of chracters
    Input : hello
    Output : 5
*/

#include<stdio.h>

int strlenX(char Brr[])
{
    static int iCount = 0;

    if(*Brr != '\0')
    {
        iCount++;
        Brr++;
        strlenX(Brr);
    }

    return iCount;
}

int main()
{   
    char Arr[30] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("%d\n",iRet);

    return 0;
}