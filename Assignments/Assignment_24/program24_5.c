// Accept N number from user and display summation of digits of each number.

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : DigitsSum
//  Description :   It is use to display summation of digits of each number. 
//  Input :         Integer array , Integer 
//  Output :        Integer
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        iSum = 0;
        iNo = Arr[iCnt];

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {   
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo/10;
        }

        printf("%d\t ",iSum);
    }
    printf("\n");

}// End of DigitsSum function

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

    DigitsSum(ptr, iLength);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 6   Input : 8225 665 3 76 953 58  Output : 17	 17	 3	 13	 17	 21
//  Input : 6   Input : 876 112 93 72 332 10  Output : 21	 4	 12	 9	 8	 1
//
/////////////////////////////////////////////////////////////////