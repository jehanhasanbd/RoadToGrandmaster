#include<iostream>
using namespace std;

// Adds two integers and returns the result
int add_two_number(int a, int b)
{
    return a + b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add_two_number(a,b);
}