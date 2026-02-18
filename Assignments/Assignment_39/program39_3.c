/*
    write a recursive program which display pbelow pattern on screen
    Input : 5
    Output : 5  4   3   2   1
*/

#include<stdio.h>

void Display(int No)
{
    if(No == 0)
    {
        return;
    }
    
    printf("%d\t",No);
    Display(No - 1);
}

int main()
{
    Display(5);

    return 0;
}

