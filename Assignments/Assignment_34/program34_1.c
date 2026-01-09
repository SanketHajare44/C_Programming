/*
    Write a program which displays ASCII table , Table conatains symbol, decimal, 
    hexadecimal and octal representation of every member from 0 to 255.
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : AsciiTable
//  Description :   print ASCII Table
//  Input :         nothing 
//  Output :        nothing
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

void AsciiTable()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt >= 32 && iCnt <= 126)
        {
            printf("%c\t%3d\t0x%02X\t\t%03o\n", iCnt, iCnt, iCnt, iCnt);
        }
        else
        {
            printf(".\t%3d\t0x%02X\t\t%03o\n", iCnt, iCnt, iCnt);
        }
    }

}// End of ChkAlpha

/////////////////////////////////////////////////////////////////
//  Time Complexity : O(n)
/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
//  Entry point function for the application
/////////////////////////////////////////////////////////////////

int main()
{   
    AsciiTable();

    return 0;

}// End of main
