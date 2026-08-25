#include<iostream>
using namespace std;

int area_triangle(int h, int b)
{
    return h * b;
}
float perimeter_triangle(int h, int b)
{
    return 0.5 * h * b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<area_triangle(a,b)<<endl;
    cout<<perimeter_triangle(a,b)<<endl;
}