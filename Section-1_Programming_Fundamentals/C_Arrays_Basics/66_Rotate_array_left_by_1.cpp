#include<iostream>
using namespace std;

void rotate_left_1_pos(int n, int *arr)
{
    if (n==1) {
        return;
    }
    int temp = arr[0];
    for (int i = 0; i < n-1; ++i)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
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
    rotate_left_1_pos(n,arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}