// Accept N number from user check whether that numbers contains 11 in it or not

/////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Description :   It is use check 11 is present or not in N numbers
//  Input :         Integer Array
//  Output :        Boolean
//  Author :        Sanket Sadashiv Hajare
//  Date :          15/11/2025
//
/////////////////////////////////////////////////////////////////

bool Check(int *Arr, int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }

    }

    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// End of Check function

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
    int iCnt = 0, iLength = 0;
    bool bRet = false;

    int *ptr = NULL;
    
    printf("Enter number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr, iLength);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(ptr);
    
    return 0;

}// End of main

/////////////////////////////////////////////////////////////////
//
//  Test cases succesfully handled by the application
//
//  Input : 5    Input : 1 2 11 4 5           Output : 11 is present
//  Input : 3    Input : 2 40 55              Output : 11 is not present
//  Input : 7    Input : 85 66 3 80 93 88 11  Output : 11 is present
/////////////////////////////////////////////////////////////////
