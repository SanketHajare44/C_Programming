#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&length);

    // Step 1 : Allocate the memory
    Arr = (int *)calloc(length , sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets succesfully allocated\n");
    }

    // Step 2 : Use the memory

    // Step 3 : Free the memory
    free(Arr);

    return 0;
}
