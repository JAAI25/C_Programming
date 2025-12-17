#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFrequency
//  Description :   It is used to perform display Frequency
//  Input :         Integer
//  Output :        Integer
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    printf("Enter frequency:\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}