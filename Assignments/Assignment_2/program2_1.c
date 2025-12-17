#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayStar
//  Description :   It is used to perform display *
//  Input :         Integer
//  Output :        -
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo )
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}