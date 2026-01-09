/*
    Accept Division of student from user and depends on the division display exam timing.
    There are 4 division in school as A,B,C,D. Exam of division A at 7AM , B at 8:30AM, C at 9:20AM,
    and D at 10.30 AM
    (Application should be case insensitive)
*/

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : ChkSmall
//  Description :   It is use check whether character is small case or not 
//  Input :         character
//  Output :        boolen
//  Author :        Sanket Sadashiv Hajare
//  Date :          3/12/2025
//
/////////////////////////////////////////////////////////////////

void DisplaySchedular(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        ch = (char)(ch - 32);
    }

    switch(ch)
    {
        case 'A' :
            printf("Exam at 7 AM\n");
            break;
        case 'B' :
            printf("Exam at 8:30 AM\n");
            break;
        case 'C' :
            printf("Exam at 9:20 AM\n");
            break;
        case 'D' :
            printf("Exam at 10:30 AM\n");
            break;
        default :
            printf("Invalid input\n");
    } 
}// End of DisplaySchedular

/////////////////////////////////////////////////////////////////
//  Time Complexity : O(1)
/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
//  Entry point function for the application
/////////////////////////////////////////////////////////////////

int main()
{   
    char cValue = '\0';                 // Accept user input

    printf("Enter the Division : \n");
    scanf("%c",&cValue);

    DisplaySchedular(cValue);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : a         Output : Exam at 7 AM
//  Input : C         Output : Exam at 9:20 AM
//
/////////////////////////////////////////////////////////////////
