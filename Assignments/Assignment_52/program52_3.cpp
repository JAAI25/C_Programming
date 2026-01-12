#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < 0)
        {
            arr[iCnt] = -arr[iCnt];
        }
        Sum = arr[iCnt] + Sum;
    }
    return Sum;

}
int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0, 3.7,9.8, 8.7};

    int iSum = AddN(arr,5);
    cout<<"Addition is : "<<iSum<<"\n";

    float fSum = AddN(brr,4);
    cout<<"Addition is : "<<fSum<<"\n";

    return 0;
}