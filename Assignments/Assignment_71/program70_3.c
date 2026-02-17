/*
    Write a recursive program which accepts string from user and count number of small character
    Input : HELLoWOrLD
    Output : 5
*/

#include<stdio.h>

int CountSmallChar(char Brr[])
{
    static int iCount = 0;

    if(*Brr != '\0')
    {
        if(*Brr >= 'a' && *Brr <= 'z')
        {
            iCount++;
        }

        CountSmallChar(Brr + 1);
    }

    return iCount;
}

int main()
{
    int iRet = 0;

    char Arr[20] = "HELLoWOrLD";

    iRet = CountSmallChar(Arr);

    printf("Small characteras are : %d\n",iRet);

    return 0;
}