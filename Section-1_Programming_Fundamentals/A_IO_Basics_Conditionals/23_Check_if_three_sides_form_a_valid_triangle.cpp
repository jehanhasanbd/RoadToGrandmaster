#include<iostream>
using namespace std;

int valid_triangle(int a, int b, int c)
{
    if ((a+b >= c) && (b+c>=a) && (c+a>=b))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<valid_triangle(a,b,c);
}