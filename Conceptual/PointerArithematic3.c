#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    //p + q;      // Not allowed
    p = p + 3;      // Allowed

    printf("Data pointed by p is : %d\n",*p);

    return 0;
}