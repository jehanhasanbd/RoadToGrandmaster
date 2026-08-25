#include<iostream>
using namespace std;

// Swaps two integers using references
void swap_two_number(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap_two_number(a,b);
    cout<<a<<" "<<b;
}