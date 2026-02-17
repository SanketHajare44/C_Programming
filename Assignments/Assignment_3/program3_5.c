// Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool>

/////////////////////////////////////////////////////////////////
//
//  Function name : chkVowel
//  Description :   It is used to check character is vowel or not
//  Input :         Character
//  Output :        Boolean
//  Author :        Sanket Sadashiv Hajare
//  Date :          17/10/2025
//
/////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

bool chkVowel(char cCharacter)
{
    if(cCharacter=='a' || cCharacter=='A' ||   // Business logic
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
    char cValue = '\0';                         // To accept user input
    bool bRet = FALSE;                          // TO store the result

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);                    // Function call

    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }

    return 0;
}// End main function

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : A     Output : It is vowel
//  Input : r     Output : It is not vowel
//
/////////////////////////////////////////////////////////////////

