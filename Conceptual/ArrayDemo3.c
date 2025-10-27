#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};

    printf("Arr : %lu\n",Arr);                  // 100
    printf("&Arr : %lu\n",&Arr);                // 100
    printf("&(Arr[0]) : %lu\n",&(Arr[0]));      // 100

    return 0;
}
