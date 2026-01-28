#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int Substraction(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 - iNo2;
    return iAns;
}

int main()
{
    int iRet = 0;

    iRet = Addition(11,10);
    printf("Addition is : %d\n",iRet);

    iRet = Substraction(21,10);
    printf("Substraction is : %d\n",iRet);

    return 0;
}