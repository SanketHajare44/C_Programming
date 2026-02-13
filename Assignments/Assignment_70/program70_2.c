/*
    Write a recursive program which accepts number from user and return summation of digits
    Input : 416312
    Output : 17
*/

#include<stdio.h>

int Display(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {   iDigit = iNo % 10;
        iSum = iSum + iDigit;
        Display(iNo / 10);
    }

    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("%d\n",iRet);

    return 0;
}