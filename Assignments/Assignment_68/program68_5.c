/*
    Write a recursive program which display below pattern
*/

#include<stdio.h>

void Display()
{
    static char cValue = 'a';

    if(cValue <= 'f')
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