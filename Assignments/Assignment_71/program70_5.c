/*
    Write a recursive program which accepts number from user and return its reverse number.
    Input : 523
    Output : 325
*/

#include<stdio.h>

int Reverse(int iNo)
{
    static int num = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        num = (num * 10) + iDigit;   
        Reverse(iNo / 10);
    }

    return num;
}

int main()
{
    int iRet = 0;
    int iValue = 523;

    iRet = Reverse(iValue);

    printf("Reverse number is : %d\n",iRet);

}