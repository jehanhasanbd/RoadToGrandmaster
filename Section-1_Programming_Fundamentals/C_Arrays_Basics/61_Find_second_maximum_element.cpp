#include<iostream>
using namespace std;

int find_sec_max_array(int n, int *arr, int &index)
{
    int maxi = INT_MIN, sec_maxi = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > maxi) {
            sec_maxi = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > sec_maxi && arr[i] != maxi) {
            sec_maxi = arr[i];
            index = i;
        }
    }
    return sec_maxi;
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
    cout<<find_sec_max_array(n,arr,index)<<endl;
    cout<<"Index: "<<index;
}