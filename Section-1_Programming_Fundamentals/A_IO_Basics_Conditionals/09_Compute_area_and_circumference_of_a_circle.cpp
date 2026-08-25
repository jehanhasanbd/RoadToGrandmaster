#include<iostream>
#define PI 3.1416
using namespace std;

int area_circle(int r)
{
    return PI * r * r;
}
int circumference_circle(int r)
{
    return 2* PI * r;
}

int main()
{
    int r;
    cin>>r;
    cout<<area_circle(r)<<endl;
    cout<<circumference_circle(r)<<endl;
}