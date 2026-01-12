#include<iostream>
using namespace std;

template<class T>

int SearchLast(T *arr, int iSize, int iNo)
{
    int iCnt = 0;
    int iPos = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            iPos = iCnt; 
        }
    }
    return iPos;

}
int main()
{
    int iRet = 0;

    int arr[] = {10,20,30,10,30,40,10,40,10};

    iRet = SearchLast(arr,9,40);

    cout<<"Last Occurance is : "<<iRet;

    return 0;
}