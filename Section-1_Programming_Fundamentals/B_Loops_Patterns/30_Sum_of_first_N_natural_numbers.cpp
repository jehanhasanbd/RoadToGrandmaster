#include<iostream>
using namespace std;

int sum_1_to_N(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    return sum;
}
int sum_1_to_N_opt(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int n;
    cin>>n;
    cout<<sum_1_to_N(n)<<endl;
    cout<<sum_1_to_N_opt(n)<<endl;
}