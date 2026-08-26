#include<iostream>
using namespace std;

int find_sec_min_array(int n, int *arr, int &index)
{
    int mini = INT_MAX, sec_mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < mini) {
            sec_mini = mini;
            mini = arr[i];
        }
        else if (arr[i] < sec_mini && arr[i] != mini) {
            sec_mini = arr[i];
            index = i;
        }
    }
    return sec_mini;
}

int main()
{
    int n,index=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    cout<<find_sec_min_array(n,arr,index)<<endl;
    cout<<"Index: "<<index;
}