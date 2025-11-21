// Write program which accept range from user and display all even number in between that range.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : RangeDisplayEven
//  Description :   It is used to display range of even number
//  Input :         Interger, Integer
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

void RangeDisplayEven(
                    int iStart,                 // Input1
                    int iEnd                    // Input2
                 )
{
    int iCnt = 0;                               // Loop counter

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)    // Business logic
    {   
        if((iCnt%2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}// End of RangeDisplayEven function

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

    RangeDisplayEven(iValue1,iValue2);          // Function call

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 10   Input : 18   Output : 10	12	14	16	18
//  Input : 23   Input : 35   Output : 24	26	28	30	32	34
//  Input : -8   Input : 2    Output : -8	-6	-4	-2	0	2
//  Input : 45   Input : 10   Output : Invalid Range
//
/////////////////////////////////////////////////////////////////
