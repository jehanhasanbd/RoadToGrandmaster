#include<iostream>
using namespace std;

// Returns quotient of two integers, returns 0 if divisor is zero
int quotient_two_number(int a, int b)
{
    if (b==0)
    {
        return 0;
    }
    return a / b;
}

// Returns remainder of two integers, returns 0 if divisor is zero
int remainder_two_number(int a, int b)
{
    if (b==0)
    {
        return 0;
    }
    return a % b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<quotient_two_number(a,b)<<endl;
    cout<<remainder_two_number(a,b)<<endl;
}