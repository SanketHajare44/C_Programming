/*
    iRow : 4
    iCol : 4

            1	2	3	4	
                2	3   4	
                    3	4	
                    	4

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
//  Date :          24/11/2025
//
/////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{   
    int i = 0, j = 0, k = 0;

    for( i = 1; i <= iRow; i++)
    {   
        for(k = 1; k<= i; k++)
        {
            printf(" \t");
        }

        for( j = i; j <= iCol; j++)
        {
                printf("%d\t",j);                 
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
// Input  : 5 5
// Output :
//          1	2	3	4	5	
//        	    2	3	4	5	
//  	 	        3	4	5	
//  	 	 	        4	5	
//  	 	 	 	        5
//
/////////////////////////////////////////////////////////////////
