#include<iostream>
using namespace std;

template<class T>
T SumOdd(T *arr, int iSize)
{
    int iCnt = 0;
    T iSum ;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            iSum = arr[iCnt] + iSum; 
        }
    }
    return iSum;
    
}
int main()
{
    int iRet = 0;
    int arr[] = {3,6,9,12,15,18,21,24};

    iRet = SumOdd(arr,8);
    cout<<" Summation of Odd number is : "<<iRet;


    return 0;
}