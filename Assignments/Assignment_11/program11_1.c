// Write a program which accept range from user and display all numbers in between that range.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplay
//  Description :   It is used to display range of number
//  Input :         Integer, Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void RangeDisplay(
                    int iStart,               // Input1
                    int iEnd                  // Input2
                 )
{
    int iCnt = 0;                             // Loop counter

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)  // Business logic
    {
        printf("%d\t",iCnt);
    }
}// End of RangeDisplay function

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
    int iValue1 = 0, iValue2 = 0;           // To accept user input

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    
    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);          // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 23  Input : 35     Output : 23	24	25	26	27	28	29	30	31	32	33	34	35
//  Input : -9  Input : 9      Output : -9	-8	-7	-6	-5	-4	-3	-2	-1	0	1	2	3	45	6	7	8	9
//  Input : 10  Input : -2      Output : Invalid range
//  Input : 90  Input : 18     Output : Invalid range
//
/////////////////////////////////////////////////////////////////
