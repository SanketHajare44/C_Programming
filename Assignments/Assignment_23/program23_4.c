// Accept N numbers from user and accept Range, display all elements from that range

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Range
//  Description :   It is use to display all elements from that range
//  Input :         Integer Integer Interger  Integer Array
//  Output :        void
//  Author :        Sanket Sadashiv Hajare
//  Date :          16/11/2025
//
/////////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Elements in the range are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        if(Arr[iCnt]>=iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }  
    }
    printf("\n");
}// End of Range function

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
    int iCnt = 0, iLength = 0, iValue1 = 0, iValue2 = 0;

    int *ptr = NULL;
    
    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);


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

    Range(ptr, iLength,iValue1,iValue2);

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 6   Input : 60  Input : 90  Input : 85  66 3  76 93 88   Output : 85 66 76 88
//  Input : 3   Input : 30   Input : 50 Input : 85  66 3  76 93 88   Output :
//
/////////////////////////////////////////////////////////////////
