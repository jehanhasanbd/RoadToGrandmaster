#include<iostream>
using namespace std;

void min_max_finder(int *arr,int low, int high, int &mini, int &maxi)
{
    if (low == high) {
        mini = arr[low];
        maxi = arr[low];
        return;
    }
    if (low+1 == high) {
        mini = min(arr[low], arr[high]);
        maxi = max(arr[low], arr[high]);
        return;
    }
    int mid = (low + high)/2;
    int minl=0, maxl=0, minr=0, maxr=0;
    min_max_finder(arr,low, mid, minl, maxl);
    min_max_finder(arr,mid+1, high, minr, maxr);
    mini = min(minl, minr);
    maxi = max(maxl, maxr);
    return;
}


int main()
{
    int arr[8] = {45, 30, 20, 80, 25, 15, 50, 35};
    int mini = INT_MAX, maxi = INT_MIN;
    min_max_finder(arr,0,7, mini, maxi);
    cout<<mini<<" "<<maxi;
}