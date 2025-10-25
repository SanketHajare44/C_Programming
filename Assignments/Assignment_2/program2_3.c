// Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo".

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<5)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}