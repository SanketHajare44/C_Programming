// Print all numbers from 1 to N

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : print_numbers
//  Description :   It is used to display 1 to N numbers 
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void print_numbers(
                    int limit                   // Input
                  )
{
    int iCnt = 0;                               // Loop counter

    for(iCnt = 1; iCnt <= limit; iCnt++)        // Business logic
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

}// End of print_numbers function

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
    int limit = 0;                             // To accept user input

    printf("Enter limit : \n");
    scanf("%d",&limit);

    print_numbers(limit);                      // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 1	2	3	4	5	6	7	8	9	10
//  Input : 18      Output : 1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18
//  Input : 1       Output : 1
//
/////////////////////////////////////////////////////////////////
