/*
    Write a recursive program which accepts number from user and return largest digit
    Iniput : 87983
    Output : 9

*/

#include<stdio.h>

int Maximum(int iNo)
{      
    static int MaxDigit = 0;
    int idigit = 0;

    if(iNo != 0)
    {   
        idigit = iNo % 10;

        if(idigit > MaxDigit)
        {
            MaxDigit = idigit;
        }

        Maximum(iNo / 10);
        
    }

    return MaxDigit;
}

int main()
{
    int iRet = 0;
    int Value = 87893;

    iRet = Maximum(Value);

    printf("Maximum digit are : %d\n",iRet);

}