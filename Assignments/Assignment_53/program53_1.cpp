#include<iostream>
using namespace std;


template<class T>
void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        dest[iCnt] = src[iCnt];   
    }

}
int main()
{
    int iCnt = 0;

    int arr1[] = { 10,20,30,40,50};
    int arr2 [5];

    CopyArray(arr1, arr2, 5);

    cout<<"Copied Array is : ";
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<arr2[iCnt]<<" ";
    }
    cout<<"\n";

    float farr1[] = {10.22f, 20.56f, 30.63f};
    float farr2 [3];

    CopyArray(farr1, farr2, 3);

    cout<<"Copied Array is : ";
    for(iCnt = 0; iCnt < 3; iCnt++)
    {
        cout<<farr2 [iCnt]<<" ";
    }

    return 0;
}