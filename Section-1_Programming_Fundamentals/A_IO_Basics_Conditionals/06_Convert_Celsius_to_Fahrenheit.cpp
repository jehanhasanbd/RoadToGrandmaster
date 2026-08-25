#include<iostream>
using namespace std;

float cel_to_fahrenheit(float cel)
{
    float fah = (cel/5.0) * 9.0 + 32.0;
    return fah;
}

int main()
{
    float cel;
    cin>> cel;
    cout<<cel_to_fahrenheit(cel);
}