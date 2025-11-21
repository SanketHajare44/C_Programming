// Accept N numbers from user and returns frequency of 11 from it

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
//  Description :   It is use  to  frequency of 11 from N numbers
//  Input :         Integer Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////

int Frequency(int *Arr, int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
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

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
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
//  Input : 5    Input : 1 2 11 4 5           Output : 1
//  Input : 3    Input : 2 40 55              Output : 0
//  Input : 7    Input : 11 11 3 11 93 88 11  Output : 4
/////////////////////////////////////////////////////////////////
