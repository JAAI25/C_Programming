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
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};

    int iRet = Min(arr, 5);
    cout<<"Maximum number is :"<<iRet<<"\n";

    float fRet = Min(brr, 4);
    cout<<"Maximum number is :"<<fRet<<"\n";

    return 0;
}