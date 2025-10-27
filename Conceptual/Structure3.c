#include<stdio.h>

struct Demo
{
    int i;
    struct Demo * ptr;   
};

int main()
    {
        struct Demo obj1;
        struct Demo obj2;
        struct Demo obj3;
        
        obj1.i = 11;
        obj2.i = 21;
        obj3.i = 51;

        obj1.ptr = &obj2;
        obj2.ptr = &obj3;
        obj3.ptr = NULL;

        
        
    return 0;
}