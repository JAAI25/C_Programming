#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DivideTwoNumbers
//  Description :   It is used to perform Division
//  Input :         Integer, Integer
//  Output :        Integer
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

    int Divide(int iNo1, int iNo2)
    {
        int iAns = 0;

        if(iNo2 < 0 )
        {
            return -1;
        }

        iAns = iNo1/iNo2;

        return iAns;
    }

    int main()
    {
        int iValue1 = 15, iValue2 =5;
        int iRet = 0;

        iRet = Divide(iValue1,iValue2);

        printf("Divide is %d",iRet);

        return 0;
    }