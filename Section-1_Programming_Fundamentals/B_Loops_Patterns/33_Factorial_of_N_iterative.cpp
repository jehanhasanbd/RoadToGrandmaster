#include<iostream>
using namespace std;

long long factorial(int n)
{
    long long sum = 1;
    for (int i = 1; i <= n; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}