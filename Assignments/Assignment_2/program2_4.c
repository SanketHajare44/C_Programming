// Accept two number from user and display first number in second number of times.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description :   It is used to display first number in second number of times
//  Input :         Integer Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo<0)                               // Updater
    {
        iNo = -iNo;
    }

    if(iFrequency<0)                        // Updater
    {
        iFrequency = -iFrequency;
    }

    for(iCnt=1; iCnt<=iFrequency; iCnt++)   // Business logic
    {
        printf("%d\t",iNo);
    }
    printf("\n");

}// End Display Function

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
    int iValue = 0;                         // To accept user input
    int iCount = 0;                         // To accept user input

    printf("Enter number :\n");
    scanf("%d",&iValue);

    printf("Enter number :\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);                 // Function call

    return 0;
    
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 7     Output : 7 7 7 7 7 7 7 
//  Input : 10    Output : 2 2 2 2 2 2 2 2 2 2
//
/////////////////////////////////////////////////////////////////
