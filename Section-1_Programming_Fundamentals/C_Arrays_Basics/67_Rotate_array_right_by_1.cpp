#include<iostream>
using namespace std;

void rotate_right_1_pos(int n, int *arr)
{
    if (n==1) {
        return;
    }
    int temp = arr[n-1];
    for (int i = 0; i < n-1; ++i)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
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
    rotate_right_1_pos(n,arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}