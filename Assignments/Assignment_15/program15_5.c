/* write a program which accept number from user and return difference between 
    summation of even digits and summation of odd digits
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountDiff
//  Description :   It is used to return difference between Summation of even and odd number.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int CountDiff(
                int iNo                     // Input
             )
{
    int iDigit = 0;
    int iEven = 0;                          // To store summmation of even
    int iOdd = 0;                           // To store summmation of odd
    
    if(iNo < 0)                             // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)                     
    {
        iDigit = iNo%10;

        if(iDigit%2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }

        iNo = iNo/10;
    }

    return iEven - iOdd;

}// End of CountDiff function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{   
    int iValue = 0;                         // To accept user input
    int iRet = 0;                           // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);               // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 6
//  Input : 2395     Output : -15
//  Input : 944      Output : -1
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
