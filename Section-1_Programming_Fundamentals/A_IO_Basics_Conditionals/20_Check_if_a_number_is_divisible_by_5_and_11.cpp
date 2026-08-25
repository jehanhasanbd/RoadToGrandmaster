#include<iostream>
using namespace std;

int divisible_by(int num)
{
    if (num%5==0 && num%11==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a;
    cin>>a;
    cout<<divisible_by(a);
}