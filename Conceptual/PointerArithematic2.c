#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Data fetched by p is : %d\n",*p);   // 21
    printf("Data fetched by q is : %d\n",*q);   // 111
    
    p++;
    q--;

    printf("Data fetched by p is : %d\n",*p);   // 51
    printf("Data fetched by q is : %d\n",*q);   // 101
    
    return 0;
}