/*
    Write a recursive program which accepts number from user and returns its factorial
    Input : 5
    Output : 120
*/

#include<stdio.h>

int CalculateFactorial(int iNo)
{
    static int iFactorial = 1;

    if(iNo >= 1)
    {
        iFactorial = iFactorial * iNo;
        CalculateFactorial(iNo-1);
    }

    return iFactorial;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CalculateFactorial(iValue);

    printf("Factorial is : %d\n",iRet);
    return 0;
}