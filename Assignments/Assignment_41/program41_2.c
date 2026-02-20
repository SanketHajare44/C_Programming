/*
    Write a recursive program which accept input from user and return the summation of digits
    Input : 892
    Output : 19
*/

#include<stdio.h>

int Display(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }
    
    return (iNo%10) + Display(iNo / 10);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Display(iValue);
    printf("Summation of digit is  : %d\n",iRet);

    return 0;
}