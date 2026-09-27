#include<iostream>
using namespace std;

void square_print(int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2*n+1-i; ++j) {
            if (j > n-1-i) {
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