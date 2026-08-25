#include <cmath>
#include<iostream>
using namespace std;

int sum_of_digit(int n)
{
    if (n==0)
    {
        return 0;
    }

    int sum = 0;
    while (n)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}


int main()
{
    int n;
    cin>>n;
    cout<<sum_of_digit(n)<<endl;
}