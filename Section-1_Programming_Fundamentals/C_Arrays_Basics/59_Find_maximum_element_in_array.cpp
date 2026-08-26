#include<iostream>
using namespace std;

int find_max_array(int n, int *arr, int &index)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        maxi = max(maxi,arr[i]);
        if (maxi == arr[i])
        {
            index = i;
        }
    }
    return maxi;
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
    cout<<find_max_array(n,arr,index)<<endl;
    cout<<"Index: "<<index;
}