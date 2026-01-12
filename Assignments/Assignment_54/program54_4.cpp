#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr, int iSize)
{
    T temp ;
    int iStart = 0;
    int iEnd = iSize -1 ;

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
    int arr[] = {3,6,9,12,15,18,21,24,27};

    cout<<"Reverse number in array is :";
    Reverse(arr,9);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<arr[iCnt]<<" ";

    }   
    
    return 0;
}