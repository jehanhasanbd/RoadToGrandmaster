#include<iostream>
using namespace std;

int count_all_factors(int n)
{
    int count = 1;
    for (int i = 1; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<count_all_factors(n);
}