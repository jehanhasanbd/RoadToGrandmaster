#include<iostream>
using namespace std;

void print_1_to_N_even(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    print_1_to_N_even(n);
}