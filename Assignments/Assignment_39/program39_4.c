/*
    write a recursive program which display pbelow pattern on screen
    Input : 5
    Output : A  B   C   D   E   F
*/

#include<stdio.h>

void Display(int No)
{
    static char cValue = 'A';

    if(No >= 1)
    {
        printf("%c\t",cValue);
        cValue++;

        Display(No - 1);
    }
}

int main()
{
    Display(5);

    return 0;
}

