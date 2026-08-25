#include <cmath>
#include<iostream>
using namespace std;

void print_fibonacci(int n)
{
    int first = 0;
    int second = 1;
    for (int i = 1; i <= n; ++i)
    {
        if (i==1)
        {
            cout<< first<<" ";
        }
        else if (i==2)
        {
            cout<< second<<" ";
        }
        else
        {
            int next = first + second;
            cout<<next<<" ";
            first = second;
            second = next;
        }
    }
}


int main()
{
    int n;
    cin>>n;
    print_fibonacci(n);
}