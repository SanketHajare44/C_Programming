// Accept N number from user and return difference between frequency of even number and odd number.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Frequency
//  Description :   It is display difference of even and odd frequency.
//  Input :         Integer Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////

int Frequency(int *Arr, int iSize)
{
    int iCnt = 0, iEvenCount = 0, iOddCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iEvenCount++;
        }
        else 
        {
            iOddCount++;
        }
    }

    return iEvenCount - iOddCount;
}

// End of Frequency function

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

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter %d elememt : \n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iLength);

    printf("%d\n",iRet);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 5    Input : 1 2 3 4 5            Output : -1
//  Input : 3    Input : 2 40 55              Output : 1
//  Input : 7    Input : 85 66 3 80 93 88 90  Output : 1
/////////////////////////////////////////////////////////////////
