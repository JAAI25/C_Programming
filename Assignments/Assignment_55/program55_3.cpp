#include<iostream>
using namespace std;

template<class T>
T Div(T no1, T no2)
{
    T ans = 0;
    
    ans = no1 / no2;    
    return ans;
}

int main()
{
    int iRet = Div(20, 10);
    printf("Division is : %d\n",iRet);

    float fRet = Div(20.5f, 10.2f);
    printf("Division is : %f\n",fRet);

    return 0;
}