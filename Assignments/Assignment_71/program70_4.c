/*
    Write a recursive program which accepts number from user and return smalllest digit
    Input : 87983
    Output : 3

*/

#include<stdio.h>

int SmallestDigit(int iNo)
{
    static int MinDigit = 9;
    int Digit = 0;

    if(iNo != 0)
    {
        Digit = iNo % 10;
        if(Digit < MinDigit)
        {
            MinDigit = Digit;
        }
        SmallestDigit(iNo / 10);
    }

    return MinDigit;
}

int main()
{   
    int iRet = 0;
    int Value = 87983;

    iRet = SmallestDigit(Value);

    printf("Small digit : %d\n",iRet);

    return 0;
}