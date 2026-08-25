#include<iostream>
using namespace std;

int sum_1_to_N_even(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i%2==0)
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
    cout<<sum_1_to_N_even(n)<<endl;
}