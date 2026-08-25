#include<iostream>
using namespace std;

int min_of_three_number(int a, int b, int c)
{
    if (a<=b && a<=c)
    {
        return a;
    }
    if (b<=a && b<=c)
    {
        return b;
    }
    return c;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min_of_three_number(a,b,c);
}