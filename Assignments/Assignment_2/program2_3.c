#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayString
//  Description :   It is used to perform display String
//  Input :         Integer
//  Output :        Character
//  Auther :        Jaai Pranay Undire
//  Date :          01/11/2025
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}