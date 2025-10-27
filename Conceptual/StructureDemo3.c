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
    struct Demo *p = &obj;

    p->i = 11;
    p->f = 90.4f;
    p->j = 21;

    printf("%d\n",p->i);
    printf("%f\n",p->f);
    printf("%d\n",p->j);
    
    return 0;
}