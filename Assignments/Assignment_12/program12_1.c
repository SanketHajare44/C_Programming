// Print all factors of a number

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : print_Factors
//  Description :   It is used to display Factors
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void print_Factors(
                    int number                  // Input
                  )
{
    int iCnt = 0;                               // Loop counter

    if(number < 0)                              // Updater
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)   // Business logic
    {
        if((number%iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}// End of print_Factors function

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
    int iValue = 0;                             // To accept user input

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    print_Factors(iValue);                      // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 1	2	5
//  Input : 23      Output : 1
//  Input : -18     Output : 1	2	3	6	9
//
/////////////////////////////////////////////////////////////////
