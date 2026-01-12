#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T *arr, int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
           return iCnt; 
        }
    }
    return -1;

}
int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,10,30,40,10,40,10};

    iRet = SearchFirst(arr,9,40);

    cout<<"First Occurance is : "<<iRet;

    return 0;
}