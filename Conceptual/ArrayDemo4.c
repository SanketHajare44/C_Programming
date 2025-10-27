#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Size of Arr : %lu\n",sizeof(Arr));  // 20
    
    printf("Arr : %lu\n",Arr);              // 100
    printf("&Arr : %lu\n",&Arr);            // 100
    
    printf("Arr + 1 : %lu\n",Arr + 1);      // 104
    printf("(&Arr) + 1 : %lu\n",(&Arr) + 1);    // 120

    return 0;
}
