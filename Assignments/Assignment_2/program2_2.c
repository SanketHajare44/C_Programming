// Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)                     // Updater
    {
        iNo = -iNo;
    }

    while(iNo>0)                    // Business logic
    {
        printf("*");
        iNo--;
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
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);                // Function call

    return 0;

}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 7    Output : * * * * * * *
//
/////////////////////////////////////////////////////////////////