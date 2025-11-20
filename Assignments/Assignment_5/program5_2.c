// Find a maximum of two number.

/////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name : FindMax
//  Description :   It is used to find Maximum number
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////

int FindMax(
                int iValue1,                // First input
                int iValue2                 // Second input               
            )
{
    if(iValue1 > iValue2)                   // Buisness logic
    {
        return iValue1;
    }
    else
    {
        return iValue2;
    }

}// End of FindMax function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(1)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int num1 = 0,num2 = 0;                  // To accept user input 
    int result = 0;                         // To store the result

    printf("Enter two number :\n");
    scanf("%d%d",&num1,&num2);

    result = FindMax(num1,num2);

    printf("Maximum is : %d\n",result);

    return 0;
}// End of main

/////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 10       Input2 = 21       Output = 21
//  Input1 = 104      Input2 = -13      Output = 104
//  Input1 = -2       Input2 = 1        Output = 1
//
/////////////////////////////////////////////////////////////