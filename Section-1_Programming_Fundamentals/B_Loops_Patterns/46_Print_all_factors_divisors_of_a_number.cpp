#include<iostream>
using namespace std;

void print_all_factors(int n)
{
    for (int i = 1; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            cout<<i<<" ";
        }
    }
    if (n>1)
    {
        cout<<n;
    }
}

int main()
{
    int n;
    cin>>n;
    print_all_factors(n);
}