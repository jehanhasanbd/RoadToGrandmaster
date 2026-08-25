#include<iostream>
using namespace std;

float fah_to_cel(float fah)
{
    float cel =  ((fah - 32.0)/9.0 ) * 5.0;
    return cel;
}

int main()
{
    float fah;
    cin>> fah;
    cout<<fah_to_cel(fah);
}