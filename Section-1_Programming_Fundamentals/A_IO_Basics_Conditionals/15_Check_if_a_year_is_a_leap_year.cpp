#include<iostream>
using namespace std;

int leap_year(int y)
{
    if (y%400==0)
    {
        return 1;
    }
    if (y%4==0 && y%100!=0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a;
    cin>>a;
    cout<<leap_year(a);
}