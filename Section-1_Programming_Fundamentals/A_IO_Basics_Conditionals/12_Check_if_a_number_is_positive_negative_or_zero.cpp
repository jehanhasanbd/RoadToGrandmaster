#include<iostream>
using namespace std;

int check_pos_beg(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a > 0)
    {
        return 1;
    }
    return -1;
}

int main()
{
    int a;
    cin>>a;
    cout<<check_pos_beg(a);
}