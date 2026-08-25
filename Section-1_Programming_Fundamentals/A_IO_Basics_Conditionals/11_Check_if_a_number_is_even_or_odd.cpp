#include<iostream>
using namespace std;

int check_even(int a)
{
    if (a%2 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a;
    cin>>a;
    cout<<check_even(a);
}