#include<iostream>
using namespace std;

template <class T>

T Multiply(T no1, T no2)
{
    T ans = 0;

    ans = no1 * no2;
    return ans;

}
int main()
{

    int iRet = Multiply(10,20);
     
    printf("Multiply is : %d\n", iRet);

    float fRet = Multiply(10.0f, 20.0f);

    printf("Multiply is : %lf\n",fRet);

    return 0;
}