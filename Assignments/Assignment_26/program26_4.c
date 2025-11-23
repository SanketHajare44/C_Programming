/*  
    Accept number from user and Display below pattern

    Input : 5
    Output : #	1	*	#	2	*	#	3	*	#	4	*	#	5	*
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
//  Input :         Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          23/11/2025
//
/////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("#\t""%d\t""*\t",iCnt);

    }
    printf("\n");

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
    int iValue = 0;                             // To accept user input
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    Pattern(iValue);                            // Function call
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 5        Output : #	 1	*	#	2	*	#	3	*	#	4	*	#	5	*
//  Input : 3        Output : #	 1	*	#	2	*	#	3	*
//
/////////////////////////////////////////////////////////////////
