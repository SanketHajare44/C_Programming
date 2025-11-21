// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Difference
//  Description :   It is use to display difference between summation of even elements and summation of odd elements.
//  Input :         Integer array  Integer 
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;

    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]%2==0)                              // business logic
        {
           iEvenSum = iEvenSum + Arr[iCnt];
        }
        else{
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    if(iEvenSum > iOddSum){
        return iEvenSum - iOddSum;
    }
    else{
        return iOddSum - iEvenSum;
    }

}// End of Difference function

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

    iRet = Difference(ptr, iLength);                    // Function call

    printf("Difference is %d\n",iRet);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 6   Input : 85 66 3 66 93 88   Output : 53
//  Input : 6   Input : 44 66 93 72 70 10  Output : 169
//
/////////////////////////////////////////////////////////////////
