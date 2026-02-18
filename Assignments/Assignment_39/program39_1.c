/*
    write a recursive program which display pbelow pattern on screen
    Input : 5
    Output : *  *   *   *   *
*/

#include<stdio.h>

void Display(int No)
{
    if(No == 0)
    {
        return;
    }
    printf("*\t");
    Display(No - 1);
}

int main()
{
    Display(5);

    return 0;
}

