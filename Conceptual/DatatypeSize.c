#include<stdio.h>

int iMarks = 89;

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.564323;

    printf("Size of character is : %lu\n",sizeof(cValue));
    printf("Size of integer is : %lu\n",sizeof(iValue));
    printf("Size of flaot is : %lu\n",sizeof(fValue));
    printf("Size of double is : %lu\n",sizeof(dValue));
    
    return 0;
}