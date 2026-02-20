/*
    Write a recursive program which accept input from user and its retunrs factorial 
    Input : 5
    Output : 120
*/

#include<stdio.h>

int Display(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return iNo%10 * Display(iNo / 10);
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    printf("Factorial is  : %d\n",iRet);

    return 0;
}