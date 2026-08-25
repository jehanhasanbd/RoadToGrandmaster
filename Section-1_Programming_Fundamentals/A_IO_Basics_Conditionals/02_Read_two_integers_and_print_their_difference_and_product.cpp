#include<iostream>
using namespace std;

// Returns the difference of two integers
int diff_two_number(int a, int b)
{
    return a - b;
}

// Returns the product of two integers
int product_two_number(int a, int b)
{
    return a * b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<diff_two_number(a,b)<<endl;
    cout<<product_two_number(a,b);
}