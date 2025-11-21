// Write a program which accept range from user and display all numbers in between that range in reverse order.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayRev
//  Description :   It is used to display range of number in reverse order
//  Input :         Integer, Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void RangeDisplayRev(
                    int iStart,               // Input1
                    int iEnd                  // Input2
                 )
{
    int iCnt = 0;                             // Loop counter

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    for(iCnt = iEnd ; iCnt >= iStart; iCnt--)  // Business logic
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}// End of RangeDisplayRev function

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
    int iValue1 = 0, iValue2 = 0;               // To accept user input

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    
    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);           // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 25  Input : 35     Output : 35	34	33	32	31	30	29	28	27	26	25
//  Input : -9  Input : 9      Output : 9	8	7	6	5	4	3	2	1	0	-1	-2	-3  -4	-5	-6	-7	-8	-9
//  Input : 10  Input : -2     Output : Invalid Range
//  Input : 90  Input : 18     Output : Invalid range
//
/////////////////////////////////////////////////////////////////
