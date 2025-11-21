// Write a program which accept number from user and display its digits in reverse

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Description :   It is used to display display digits in reverse
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayDigit(
                    int iNo             // Input
                 )
{
    int iDigit = 0;
    
    if(iNo < 0)                         // updater
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        printf("%d\t",iDigit);

        iNo = iNo/10;
    }

}// End of DisplayDigit function

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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);               // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1018     Output : 8	 1	0	1
//  Input : 23453    Output : 3	 5	4	3	2
//  Input : 5        Output : 5
//
/////////////////////////////////////////////////////////////////
