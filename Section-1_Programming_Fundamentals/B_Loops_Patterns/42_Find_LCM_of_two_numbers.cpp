    #include <cmath>
#include<iostream>
using namespace std;

int LCM(int a,int b)
{
    int max_value = max(a,b);
    for (int i = max_value; i <= a*b; i+=max_value)
    {
        if (i%a==0 && i%b==0)
        {
            return i;
        }
    }
    return a*b;
}



int main()
{
    int a,b;
    cin>>a>>b;
    cout<<LCM(a,b)<<endl;

}