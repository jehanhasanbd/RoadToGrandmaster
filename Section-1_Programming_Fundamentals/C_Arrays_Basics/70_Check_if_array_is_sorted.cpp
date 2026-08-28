#include<iostream>
using namespace std;

int check_sort(int n, int *arr)
{
    if (n==0 || n==1) {
        return 1;
    }
    for (int i = 0; i < n-1; ++i)
    {
        if (arr[i] >= arr[i+1]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    cout<<check_sort(n,arr);
}