#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'M';

    int *iPtr = &iValue;
    char *cPtr = &cValue;

    printf("sizeof iptr : %lu\n",sizeof(iPtr));
    printf("sizeof cptr : %lu\n",sizeof(cPtr));
    


    return 0;
}