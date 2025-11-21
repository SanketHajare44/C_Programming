// Accept N numbers from user and accept one another number as NO, return index of first occurrence of that NO

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : FirstOcc
//  Description :   It is use to find index of first occurrence of that NO
//  Input :         Integer Integer Integer Array
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iResult = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iResult = iCnt;
            break;
        }
        else 
        {
            iResult = -1;
        }
    }

    return iResult;
}

// End of FirstOcc function

/////////////////////////////////////////////////////////////////
//
//  Time Complexity :  Worst case O(N)
//                     Best  case O(1)
//
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{   
    int iCnt = 0, iLength = 0, iValue = 0;
    int iRet = 0;

    int *ptr = NULL;
    
    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    printf("Enter the number:\n");
    scanf("%d",&iValue);


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

    iRet = FirstOcc(ptr, iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Index of %d  is : %d\n",iValue,iRet);
    }

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 5   Input : 2   Input : 1 2 11 4 5           Output : 1
//  Input : 3   Input : 4   Input : 2 40 55              Output : -1
//  Input : 7   Input : 88  Input : 85 66 3 80 93 88 11  Output : 5
//
/////////////////////////////////////////////////////////////////
