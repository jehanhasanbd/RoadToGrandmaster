#include<iostream>
using namespace std;

// Swaps two integers using addition and subtraction
void swap_two_number_without_temp(int &a, int &b)
{
    a += b;      // a becomes a+b
    b = a - b;   // b becomes (a+b)-b = original a
    a -= b;      // a becomes (a+b)-original a = original b
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap_two_number_without_temp(a,b);
    cout<<a<<" "<<b;
}