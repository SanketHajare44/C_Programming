// Accept N numbers from user and return smallest number.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : smallest
//  Description :   It is use to display smallest element
//  Input :         Integer Integer array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

int smallest(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iLarge = 0;
    iLarge = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }

    return iLarge;

}// End of smallest function

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

    iRet = smallest(ptr, iLength);

    printf("Smallest is %d\n",iRet);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 6   Input : 15 66 3 70 10 88    Output : 3
//  Input : 6   Input : 44 66 93 72 70 10  Output : 10
//
/////////////////////////////////////////////////////////////////
