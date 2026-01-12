#include<iostream>
using namespace std;

template<class T>
T Add(T no1, T no2)
{
    T ans = 0;
    
    ans = no1 + no2;
    return ans;
}

int main()
{
    int iRet = Add(10,20);
    printf("Addition is : %d\n",iRet);

    float fRet = Add(10.5f, 20.3f);
    printf("Addition is : %f\n",fRet);

    return 0;
}