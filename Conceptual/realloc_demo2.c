#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;

    // Step 1 : Allocate the memory
    Arr = (int *)malloc(5 * sizeof(int));           // 20

    // Step 2 : Use the memory

    Arr = (int *)realloc(Arr,3*sizeof(int));       // 12

    // Step 3 : Free the memory
    free(Arr);

    return 0;
}
