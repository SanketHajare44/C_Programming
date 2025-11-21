/* 
    Write program which accept range from user and return addition of all  even numbers in
    between that range. (Range should contains positive numbers only)
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : RangeSumEven
//  Description :   It is used to display of addition all even number of range 
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          29/10/2025
//
/////////////////////////////////////////////////////////////////

int RangeSumEven(
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
        if((iCnt%2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    
    return iSum;
}// End of RangeSumEven function

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

    iRet = RangeSumEven(iValue1,iValue2);       // Function call

    if(iRet != 0)
    {
        printf("Addition of all even numbers of the range is : %d\n",iRet);
    }

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 23    Input : 30   Output : 108
//  Input : -23   Input : 35   Output : Invalid Range
//  Input : 10    Input : 18   Output : Addition of all even numbers of the range is : 70
//  Input : 90    Input : 18   Output : Invalid Range
//  Input : 1     Input : 34   Output : Addition of all even numbers of the range is : 306
//
/////////////////////////////////////////////////////////////////
