/*  
    Accept number from user and Display below pattern

    Input1 : 4      Input2 : 5

    Output :     1  2   3   4
                 2  3   4   5
                 3  4   5   6
                 4  5   6   7
                
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
    int i = 0;
    int j = 0;
    int iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
        iNo = i;

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo++;
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
//  Input  : 5   3
//  Output :  
//            1   2   3
//            2   3   4
//            3   4   5
//            4   5   6
//            5   6   7
//
/////////////////////////////////////////////////////////////////
