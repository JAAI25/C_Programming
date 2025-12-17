#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDiv
//  Description :   It is used to perform check divisible by 5 0r not 
//  Input :         Integer
//  Output :        Integer
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
//////////////////////////////////////////////////////////////////////////////////////////////// 

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}