#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize - 1; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt + 1])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    bool bRet = false;

    int arr[] = {10,20,30,40,50};

    bRet = CheckSorted(arr,5);

    if(bRet == true)
    {
        cout<<"Array is sorted in asending order.";
    }
    else
    {
        cout<<"Array is not sorted in asending order.";
    }

    return 0;
}