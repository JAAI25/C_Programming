#include<iostream>
using namespace std;


template<class T>

T Max(T iNo1, T iNo2, T iNo3)
{
    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        return iNo1;
    }
    else if(iNo2 >= iNo3 && iNo2 >= iNo1)
    {
        return iNo2;
    }
    else
    {
        return iNo3;

    }
}
int main()
{
   int iRet = 0;

   iRet = Max(56,22,41);

   cout<<" Maximum in THre numbers is : "<<iRet;

    return 0;
}