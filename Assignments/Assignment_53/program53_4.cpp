#include<iostream>
using namespace std;

template<class T>
T SecondMin(T *arr, int iSize)
{
    T min ;
    T smin ;
    int iCnt = 0;

    if(arr[0] < arr[1])
    {
        min = arr[0];
        smin = arr[1];
    }
    else
    {
        min = arr[1];
        smin = arr[0];
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < min)
        {
            smin = min;
            min = arr[iCnt];
        }
        else if(arr[iCnt] > min && arr[iCnt] < smin)
        {
            smin = arr[iCnt];
        }
    }
    return smin;
}
int main()
{   int iRet = 0;

    int arr[] = {15,43,67,34,90,23};

    iRet = SecondMin(arr,6);
    cout<<"Second Minimum number is : "<<iRet;
    return 0;
}