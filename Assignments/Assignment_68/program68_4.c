/*
    Write a recursive program which dsiplay below pattern
    A   B   C   D   E   F
*/

#include<stdio.h>

void Display()
{
    static char cValue = 'A';

    if(cValue <= 'F')
    {
        printf("%c\t",cValue);
        cValue++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}