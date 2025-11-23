/*  
    Accept number from user and Display below pattern

    Input1 : 4      Input2 : 4

    Output :    A   B   C   D
                A   B   C   D
                A   B   C   D
                A   B   C   D
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
    int i = 0, j = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j =1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++ )
        {
            if(i % 2 == 0)
            {
                printf("%c\t", ch2);
                ch2++;
            }
            else
            {
                printf("%c\t", ch1);
                ch1++;
            }
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
//            A   B   C
//            a   b   c
//            A   B   C
//            a   b   c
//            A   B   C
//
/////////////////////////////////////////////////////////////////
