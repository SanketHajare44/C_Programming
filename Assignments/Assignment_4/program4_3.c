// Write a program which accept number from user and Display its non factors.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : nonFact
//  Description :   It is used to Display non factors
//  Input :         Integer
//  Output :        None
//  Author :        Sanket Sadashiv Hajare
//  Date :          18/10/2025
//
/////////////////////////////////////////////////////////////////

void nonFact(
                int iNo                 // Input
            )
{
    int iCnt = 0;
    
    if(iNo < 0)                         // Updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)             // Business logic
        {
            printf("%d\t",iCnt);
        } 
    }
    printf("\n");
}// End nonFact Function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N)
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    nonFact(iValue);                    // Function call

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12              Output : 5	7	8	9	10	11
//  Input : 13              Output : 2	3	4	5	6	7	8	9	10	11	12
//  Input : 10              Output : 3	4	6	7	8	9
//
/////////////////////////////////////////////////////////////////