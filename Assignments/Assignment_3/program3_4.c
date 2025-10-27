// Accept one charcter from user and convert case of that character.

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n",cValue + 32);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n",cValue - 32);
    }
    else
    {
        printf("It is not chacracter\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}