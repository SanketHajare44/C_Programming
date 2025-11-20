// Write program which accept number from user and display its factors in decreasing order.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : factRev
//  Description :   It is used display factors in decreasing order
//  Input :         Integer
//  Output :        None
//  Author :        Sanket Sadashiv Hajare
//  Date :          18/10/2025
//
/////////////////////////////////////////////////////////////////

void factRev(
                int iNo                     // Input
            )
{
    int iCnt = 0;
    
    if(iNo < 0)                             // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo%iCnt) == 0)                 // Business logic
        {
            printf("%d\t",iCnt);
        } 
    }
    printf("\n");
}// End factRev Function

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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    factRev(iValue);                        // Function call

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12          Output : 6 4 3 2 1
//  Input : 13          Output : 1
//  Input : 10          Output : 5 2 1
//
/////////////////////////////////////////////////////////////////