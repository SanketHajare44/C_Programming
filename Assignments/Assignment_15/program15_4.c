// write a program which accept number from user and return multiplication of all digits

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : MultDigit
//  Description :   It is used to multiplication of all digits.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int MultDigit(
                int iNo                     // Input
             )
{
    int iDigit = 0;
    int iMulti = 0;                         // To store the result
    iMulti = 1;
    
    if(iNo < 0)                             // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)                     
    {
        iDigit = iNo%10;

        iMulti = iMulti*iDigit;

        iNo = iNo/10;
    }

    return iMulti;

}// End of MultDigit function

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

    iRet = MultDigit(iValue);               // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 0
//  Input : 2395     Output : 270
//  Input : 944      Output : 144
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
