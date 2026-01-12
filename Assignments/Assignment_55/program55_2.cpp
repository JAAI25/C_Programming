#include<iostream>
using namespace std;

template<class T>
T Sub(T no1, T no2)
{
    T ans = 0;
    
    ans = no1 - no2;    
    return ans;
}

int main()
{
    int iRet = Sub(20, 10);
    printf("Substraction is : %d\n",iRet);

    float fRet = Sub(20.5f, 10.2f);
    printf("Substraction is : %f\n",fRet);

    return 0;
}