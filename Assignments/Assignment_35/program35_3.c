/*
     Write a program which accept string from user and return difference between frequency of small characters and frequency
    of Capital characters
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Difference
//  Description :   It is used to count small characters
//  Input :         Character Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////


int Difference(char*str)
{
    int Count1 = 0;
    int Count2 = 0;
    int Ans = 0;

    while(*str != '\0')
    {   
        if((*str >= 'A') && (*str <= 'Z'))
        {
            Count1++;
        }

        if((*str >= 'a') && (*str <= 'z'))
        {
            Count2++;
        }

        str++;
    }

    Ans = Count1 - Count2;

    if(Ans < 0)
    {
        Ans = -Ans;
    }

    return Ans;
}// End of Differnce function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(n)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("Difference between small and capital alphabets : %d\n",iRet);

    return 0;

}// End of main function