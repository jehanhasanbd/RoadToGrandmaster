#include <cmath>
#include<iostream>
using namespace std;

int count_digit(int n)
{
    if (n==0)
    {
        return 1;
    }

    int count = 0;
    while (n)
    {
        count ++;
        n /= 10;
    }
    return count;
}
int count_digit_opt(int n)
{
    if (n==0)
    {
        return 1;
    }
    return log10(n) + 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<count_digit(n)<<endl;
    cout<<count_digit_opt(n)<<endl;
}