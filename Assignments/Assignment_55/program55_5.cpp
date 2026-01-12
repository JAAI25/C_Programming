#include<iostream>
using namespace std;

template<class T>
T Max(T a, T b, T c,T d)
{
    T iMax = a;
    if(b > iMax)
    {
        iMax = b;
    }
    if(c > iMax)
    {
        iMax = c;
    }
    if(d > iMax)
    {
        iMax = d;
    }
    return iMax;
}
int main()
{
    int iRet = 0;

    iRet = Max(23,55,62,12);

    cout<<"Maximum number is :"<<iRet;

    return 0;
}