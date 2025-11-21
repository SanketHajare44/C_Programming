/* 
    Write program which accept range from user and return addition of all numbers in 
    between that range.(Range should contains positive numbers only)
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : RangeSum
//  Description :   It is used to display addition of all the number of range 
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int RangeSum(
                int iStart,                     // Input1
                int iEnd                        // Input2
             )
{
    int iCnt = 0;                               // Loop counter
    int iSum = 0;                               // To store the result

    if((iStart <= 0 ) || (iEnd <= 0) || (iStart > iEnd))
    {
        printf("Invalid Range\n");
        return 0;
    }

    for(iCnt = iStart; (iCnt <= iEnd); iCnt++)  // Business logic
    {   
        iSum = iSum + iCnt;
    }
    
    return iSum;
}// End of RangeSum function

/////////////////////////////////////////////////////////////////
//  Time Complexity:
//  Best case  : O(1)
//  Worst case : O(N)
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
    int iRet = 0;                               // To store the result

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);
    
    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);           // Function call

    if(iRet != 0)
    {
        printf("Addition of all numbers of the range is : %d\n",iRet);
    }

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 1    Input : 5    Output : Addition of all numbers of the range is : 15
//  Input : -23  Input : 35   Output : Invalid Range
//  Input : 3    Input : -13  Output : Invalid Range
//  Input : 90   Input : 18   Output : Invalid Range
//  Input : 10   Input : 18   Output : Addition of all numbers of the range is : 126
//
/////////////////////////////////////////////////////////////////
