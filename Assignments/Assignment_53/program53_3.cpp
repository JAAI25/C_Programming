#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *arr, int iSize)
{
    T max = arr[0];
    T smax = arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > max)
        {
            smax = max;
            max = arr[iCnt];
        }
        else if(arr[iCnt] < max && arr[iCnt] > smax)
        {
            smax = arr[iCnt];
        }
    }
    return smax;
}
int main()
{   int iRet = 0;

    int arr[] = {15,43,67,34,90,23};

    iRet = SecondMax(arr,6);
    cout<<"Second Maximum number is : "<<iRet;
    return 0;
}