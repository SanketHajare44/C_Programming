// Write a program whichh accept number from user and print even factors of that number.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Description :   It is used to print even factors of input number
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          17/10/2025
//
/////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)                            // Updater
    {
        iNo = -iNo;
    }

    for(i=1; i<=(iNo/2); i++)
    {
        if((iNo%i) == 0 && (i%2) == 0)      // Business logic
        {
            printf("%d\t",i);
        }
    }
    
    printf("\n");
    
}// End DisplayFactor Function

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

    DisplayEvenFactor(iValue);              // Function call

    return 0;

}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 12     Output : 2    4    6
//  Input : -10    Output : 2
//
/////////////////////////////////////////////////////////////////
