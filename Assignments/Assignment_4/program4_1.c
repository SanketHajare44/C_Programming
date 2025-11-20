// write a program which accept number from user and display its multiplication of factors.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : MultiFact
//  Description :   It is used print multiplication of factors.
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          18/10/2025
//
/////////////////////////////////////////////////////////////////

int MultiFact(
                int iNo                     // Input
            )
{
    int iCnt = 0;
    int iMulti = 0;                         // To store result
    iMulti = 1;

    if(iNo < 0)                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo%iCnt) == 0)                 // Business logic
        {   
            iMulti = iMulti * iCnt;
        }
    }
    
    return iMulti;
}// End MultiFact Function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N/2)
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
    int iRet = 0;                           // To store result


    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);               // Function call

    printf("Multiplication of fcator is : %d\n",iRet);

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12      Output : 144
//  Input : 13      Output : 1
//  Input : 10      Output : 10
//
/////////////////////////////////////////////////////////////////