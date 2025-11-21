// Check if number is divisible by 5

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : is_divisible_by_five
//  Description :   It is used to display number is divible by 5 or not 
//  Input :         Integer
//  Output :        Boolean
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

bool is_divisible_by_five(
                            int number          // Input
                         )
{
    if((number%5)==0)                           // Buisness logic
    {
        return true;
    }
    else
    {
        return false;
    }
}// End of is_divisible_by_five function

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
    int iValue = 0;                             // To accept user input

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("%s\n",is_divisible_by_five(iValue) ? "Yes" : "No");

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10      Output : Yes
//  Input : 23      Output : No
//  Input : -18     Output : No
//  Input : 150     Output : Yes
//
/////////////////////////////////////////////////////////////////
