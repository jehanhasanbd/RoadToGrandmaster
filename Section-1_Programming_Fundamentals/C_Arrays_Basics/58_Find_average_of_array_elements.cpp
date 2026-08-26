#include<iostream>
using namespace std;

float avg_of_array(int n, int *arr)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    return (float)sum/n;
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
    cout<<avg_of_array(n,arr);
}