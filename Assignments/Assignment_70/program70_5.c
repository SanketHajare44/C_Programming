/*
    Write a recursive program which accepts number from user and returns its products of digits
    Input : 523
    Output : 30
*/

#include<stdio.h>

int ProductDigits(int iNo)
{
    static int product = 1;
    int iDigit = 0;
    if(iNo >= 1)
    {
        iDigit = iNo % 10;
        product = product * iDigit;
        ProductDigits(iNo/10);
    }

    return product;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = ProductDigits(iValue);

    printf("Product Digits is : %d\n",iRet);
    return 0;
}