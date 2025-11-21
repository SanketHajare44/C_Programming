// Accept N number from user and display all such numbers which contains 3 digits in it

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Digits
//  Description :   It is use to display numbers which contains 3 digits in it
//  Input :         Integer array Integer 
//  Output :        Void
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;
    int iDigit = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        iCount = 0;
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {   
            iDigit = iNo % 10;
            iCount++;

            iNo = iNo/10;
        }

        if(iCount == 3)
        {   
            printf("%d\t",Arr[iCnt]);
        }
    }

}// End of Digits function

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

    Digits(ptr, iLength);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 6   Input : 85 666 3 66 930 88   Output : 666 930
//  Input : 6   Input : 876 112 93 72 332 10  Output : 876 112 332
//
/////////////////////////////////////////////////////////////////