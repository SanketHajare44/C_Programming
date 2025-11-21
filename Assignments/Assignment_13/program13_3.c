// print all odd number  up to N

/////////////////////////////////////////////////////////////////
//
//  Requierd header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : print_odd_numbers
//  Description :   It is used to display odd numbers up to N 
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void print_odd_numbers(
                            int limit           // Input
                       )
{
    int iCnt = 0;                               // Loop counter

    for(iCnt = 1; iCnt <= limit; iCnt++)        // Business logic
    {
        if(iCnt%2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

}// End of print_odd_numbers function

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

    print_odd_numbers(limit);                 // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 1	3	5	7	9
//  Input : 17      Output : 1	3	5	7	9	11	13	15	17
//  Input : 9       Output : 1	3	5	7	9
//
/////////////////////////////////////////////////////////////////
