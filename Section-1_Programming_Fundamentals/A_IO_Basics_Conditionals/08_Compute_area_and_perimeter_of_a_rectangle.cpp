#include<iostream>
using namespace std;

int area_rectangle(int a, int b)
{
    return a * b;
}
int perimeter_rectangle(int a, int b)
{
    return 2*(a + b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<area_rectangle(a,b)<<endl;
    cout<<perimeter_rectangle(a,b)<<endl;
}