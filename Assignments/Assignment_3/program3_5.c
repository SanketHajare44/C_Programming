// Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool chkVowel(char cCharacter)
{
    if(cCharacter=='a' || cCharacter=='A' ||
        cCharacter=='e' || cCharacter=='E' || 
        cCharacter=='i' || cCharacter=='I' || 
        cCharacter=='o' || cCharacter=='O' || 
        cCharacter=='u' || cCharacter=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }

    return 0;
}