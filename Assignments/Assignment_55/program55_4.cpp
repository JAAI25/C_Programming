#include<iostream>
using namespace std;

template<class T>
void Swap(T &no1, T &no2)
{
    T temp;

    temp = no1;
    no1 = no2;
    no2 = temp;

}

int main()
{
    int a = 10, b = 20;
    Swap(a, b);
    cout<<"After swap a is :" <<a<<"\tb is :"<<b;

    float x = 3.5f, y = 7.8f;
    Swap(x,y);
    cout<<"\nAfter swap x is :" << x<<"\ty is : "<< y ;

    return 0;
}