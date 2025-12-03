#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj;

    obj.i = 11;
    obj.f = 90.4f;
    obj.j = 21;

    printf("%d\n",obj.i);   // 11
    printf("%f\n",obj.f);   // 90.4
    printf("%d\n",obj.j);   // 21
    
    return 0;
}