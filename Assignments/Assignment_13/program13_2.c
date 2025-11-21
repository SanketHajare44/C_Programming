// Print all even numbers up to N

/////////////////////////////////////////////////////////////////
//
//  Requierd header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : print_even_numbers
//  Description :   It is used to display even numbers up to N 
//  Input :         Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void print_even_numbers(
                            int limit           // Input
                       )
{
    int iCnt = 0;                               // Loop counter

    for(iCnt = 1; iCnt <= limit; iCnt++)        // Business logic
    {
        if(iCnt%2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");

}// End of print_even_numbers function

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

    print_even_numbers(limit);                 // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : 2	4	6	8	10
//  Input : 18      Output : 2	4	6	8	10	12	14	16	18
//  Input : 7       Output : 2	4	6 
//
/////////////////////////////////////////////////////////////////
