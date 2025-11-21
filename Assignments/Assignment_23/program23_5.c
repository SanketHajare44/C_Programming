// Accept N numbers from user and return product of all odd elements

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Product
//  Description :   It is use to display Product of Odd elements
//  Input :         Integer Integer array
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

int Product(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iMulti =0;
    iMulti = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        if(Arr[iCnt]%2 == 1)
        {
            iMulti = iMulti*Arr[iCnt];
        }
    }

    if(iMulti == 1)
    {
        iMulti = 0;
    }

    return iMulti;

}// End of Product function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity : O(N)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{   
    int iCnt = 0; 
    int iLength = 0;
    int iRet = 0;

    int *ptr = NULL;
    
    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
        printf("Enter %d elements \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Product(ptr, iLength);

    printf("Product is %d\n",iRet);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 6   Input : 15 66 3 70 10 88    Output : 45
//  Input : 6   Input : 44 66 72 70 10 88   Output : 0
//
/////////////////////////////////////////////////////////////////
