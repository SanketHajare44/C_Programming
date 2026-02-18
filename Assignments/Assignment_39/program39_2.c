/*
    write a recursive program which display pbelow pattern on screen
    Input : 5
    Output : 1  2   3   4   5
*/

#include<stdio.h>

void Display(int No)
{
    if(No == 0)
    {
        return;
    }
    Display(No - 1);
    printf("%d\t",No);
}

int main()
{
    Display(5);

    return 0;
}

