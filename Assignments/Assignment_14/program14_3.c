// write a program which accept number from user and count frquency of 2 in it.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountTwo
//  Description :   It is used to count frquency of 2
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int CountTwo(
                int iNo                 // Input
            )
{
    int iDigit = 0;
    int iCount = 0;                     // to store the result
    
    if(iNo < 0)                         // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)                     
    {
        iDigit = iNo%10;
        
        if(iDigit == 2)                 // Business logic
        {
            iCount++;
        }

        iNo = iNo/10;
    }

    return iCount;

}// End of CountTwo function

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
    int iValue = 0;                     // To accept user input
    int iRet = 0;                       // To store the result

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);             // Function call

    printf("%d\n",iRet);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 0
//  Input : 23453    Output : 1
//  Input : -22267   Output : 3
//  Input : 0        Output : 0
//
/////////////////////////////////////////////////////////////////
