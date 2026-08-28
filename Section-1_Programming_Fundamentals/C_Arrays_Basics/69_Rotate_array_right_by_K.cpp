#include<iostream>
using namespace std;

void reverse_array(int *arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate_right_k_pos(int n, int *arr, int k)
{
    if (n==1) {
        return;
    }
    reverse_array(arr,0,n-1);
    reverse_array(arr,0,k-1);
    reverse_array(arr,k,n-1);
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    rotate_right_k_pos(n,arr,k);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}