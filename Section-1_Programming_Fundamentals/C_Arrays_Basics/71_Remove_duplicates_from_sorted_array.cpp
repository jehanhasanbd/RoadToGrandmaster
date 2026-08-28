#include<iostream>
using namespace std;

void remove_duplicate_sorted(int n, int *arr)
{
    int safe = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i-1] != arr[i]) {
            arr[safe++] = arr[i-1];
        }
    }

    arr[safe++] = arr[n-1];

    for (int i = safe; i < n; ++i) {
        arr[i] = -1;
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
    remove_duplicate_sorted(n,arr);
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}