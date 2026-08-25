#include<iostream>
using namespace std;
long long power(int a,int b)
{
    long long sum = 1;
    for (int i = 1; i <= b; ++i)
    {
        sum *= a;
    }
    return sum;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}