/*
    Write a recursive program which accepts string from user and count white spaces
    Input : HE LLo WOr LD
    Output : 3
*/

#include<stdio.h>

int CountWhiteSpaces(char *Brr)
{
    static int iCount = 0;

    if(*Brr != '\0')
    {
        if(*Brr == ' ')
        {
            iCount++;
        }
        CountWhiteSpaces(Brr+1);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[20] = "HE LLo WOr LD";

    iRet = CountWhiteSpaces(Arr);

    printf("%d\n",iRet);

    return 0;
}