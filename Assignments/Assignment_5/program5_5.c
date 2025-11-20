// Find largest among three numbers

/////////////////////////////////////////////////////////////
//
//  Requied header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////
//
//  Function name : FindLargest
//  Description :   It is used to find Maximum number
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////

int FindLargest(
                    int x,          // Input1
                    int y,          // Input2
                    int z           // Input3
                )
{
    if(x>y && x>z)                  // Business logic
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}// End of FindLargest function

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
    int a = 0;                      // To accept the user input1
    int b = 0;                      // To accept the user input2
    int c = 0;                      // To accept the user input3

    int result = 0;                 // To store the result

    printf("Enter a three number :\n");
    scanf("%d %d %d",&a,&b,&c);

    result = FindLargest(a,b,c);    // Function call

    printf("Largest number is : %d\n",result);

    return 0;
}// End of main

/////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input1 = 10       Input2 = 21      Input3 = 90      Output = Largest number is : 90
//  Input1 = 10       Input2 = -21     Input3 = 31      Output = Largest number is : 31
//  Input1 = 110      Input2 = 21      Input3 = 21      Output = Largest number is :110
//
/////////////////////////////////////////////////////////////