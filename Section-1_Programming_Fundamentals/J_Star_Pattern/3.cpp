#include<iostream>
using namespace std;

void square_print(int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i==n-1 || j==0 || j==n-1 || i==j || i==n-1-j) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    square_print(n);
}