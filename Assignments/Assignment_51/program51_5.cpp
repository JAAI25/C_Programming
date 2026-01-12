#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    T temp = 0;

    while(iStart < iEnd)
    {
        temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;

    }

}

int main()
{
    int iCnt = 0;
    int iSize = 9;

    int arr[] = { 10,20,30,10,30,40,10,40,10};

    cout<<"Before Reverse : ";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<" ";
    }

    Reverse(arr,9);

    cout<<"\nAfter Reverse : ";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<" ";
    }

    return 0;
    
}