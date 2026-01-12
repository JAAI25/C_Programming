#include<iostream>
using namespace std;

template<class T>
bool Search(T *arr, int iSize, T value)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool bRet = false;

    int arr[] = {31,44,24,18,55};

    bRet = Search(arr,5,18
    );

    if(bRet == true)
    {
        cout<<"Number is Present";
    }
    else
    {
        cout<<"Number is not present.";
    }

    return 0;
}