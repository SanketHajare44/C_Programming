/*
    iRow : 4
    iCol : 4

            $	*	*	*	
            *	$	*	*	
            *	*	$	*	
            *	*	*	$

*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : pattern
//  Description :   It is use to display Pattern
//  Input :         Integer , Integer 
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          23/11/2025
//
/////////////////////////////////////////////////////////////////



void Pattern(int iRow, int iCol)
{
    if(iRow != iCol)
    {
        printf("Invalid input\n");
        printf("Row number and column number should be same\n");
        return;
    }

    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == j)
                printf("$\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
}// End of Pattern function

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
    int iValue1 = 0, iValue2 = 0;                         // To accept user input
    
    printf("Enter the number of Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);                            // Function call
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  
// Input  : 3 4
// Output :
//          Invalid input
//          Row number and column number should be same
//
/////////////////////////////////////////////////////////////////
