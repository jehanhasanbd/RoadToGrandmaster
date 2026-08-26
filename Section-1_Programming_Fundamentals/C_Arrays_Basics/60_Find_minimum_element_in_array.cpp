#include<iostream>
using namespace std;

int find_min_array(int n, int *arr, int &index)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        mini = min(mini,arr[i]);
        if (mini == arr[i])
        {
            index = i;
        }
    }
    return mini;
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
    cout<<find_min_array(n,arr,index)<<endl;
    cout<<"Index: "<<index;
}