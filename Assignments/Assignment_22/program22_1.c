// Accept N number from user and return frequnency of even number.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Description :   It is display frequnency of even number.
//  Input :         Integer Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;

}// End of CountEven function

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
    int iCnt = 0, iLength = 0, iRet = 0;

    int *ptr = NULL;

    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)
    {
        printf("Unable to allocate the memory.");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {     
        printf("Enter %d elements : \n",iCnt+1);   
        scanf("%d",&ptr[iCnt]);
    }
    
    iRet = CountEven(ptr,iLength);

    printf("Result is %d\n",iRet);

    free(ptr);

    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 5    Input : 1 2 3 4 5            Output : 2
//  Input : 3    Input : 2 40 55              Output : 2
//  Input : 6    Input : -9 -2 13 4 -50 0     Output : 4
/////////////////////////////////////////////////////////////////
