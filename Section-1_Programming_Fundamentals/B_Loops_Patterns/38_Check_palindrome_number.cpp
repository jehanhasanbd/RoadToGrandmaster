#include <cmath>
#include<iostream>
using namespace std;

int reverse_number(int n)
{
    if (n==0)
    {
        return 1;
    }
    int n_copy = n;
    int sum = 0;
    while (n)
    {
        int rem = n%10;
        sum = sum*10 + rem;
        n /= 10;
    }
    return n_copy == sum;
}


int main()
{
    int n;
    cin>>n;
    cout<<reverse_number(n)<<endl;
}