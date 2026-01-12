#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    int iCnt = 0;
    T iMin = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < iMin)
        {
            iMin = arr[iCnt];
        }

    }
    return iMin;
}
int main()
{
    int iCnt = 0;
    int iRet = 0;
    int arr[] = {18,24,9,12,15,3,21,6,27};

    iRet = Min(arr,9);

    cout<<"Smallest element from an array is : "<<iRet;


    return 0;
}