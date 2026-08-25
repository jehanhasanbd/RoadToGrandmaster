#include<iostream>
using namespace std;

int sum_of_all_factors(int n)
{
    int sum = 1 + n;
    for (int i = 1; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_of_all_factors(n);
}