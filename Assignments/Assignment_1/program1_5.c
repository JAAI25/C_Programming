#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AcceptNumber
//  Description :   It is used to perform  display *
//  Input :         -
//  Output :        -
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
//////////////////////////////////////////////////////////////////////////////////////////////// 

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo ; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}