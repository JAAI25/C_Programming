#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description :   It is used to perform display value is Even or not
//  Input :         Integer
//  Output :        -
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
     return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is an Even Number", iValue);
    }
    else
    {
        printf("%d is not an Even Number", iValue);
    }

    return 0;
}