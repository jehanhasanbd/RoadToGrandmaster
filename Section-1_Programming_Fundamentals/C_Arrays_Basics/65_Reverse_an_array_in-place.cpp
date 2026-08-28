#include<iostream>
using namespace std;

void reverse_array(int n, int *arr)
{
    for (int i = 0; i < n/2; ++i)
    {
        swap(arr[i],arr[n-1-i]);
    }
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
    reverse_array(n,arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}