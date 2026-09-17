#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr,int low, int mid, int high) {
    vector<int> temp(high+1);
    int i = low, j=mid+1, k=0;
    while (i<= mid && j<= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
        }
    }
    while (i<=mid) {
        temp[k] = arr[i];
        k++; i++;
    }
    while (j<=high) {
        temp[k] = arr[j];
        k++; j++;
    }
    for (int i = low; i <= high; ++i) {
        arr[i] = temp[i-low];
    }
}

void merge_sort(int *arr, int low, int high)
{
   if (low < high) {
       int mid = (low + high)/2;
       merge_sort(arr,low, mid);
       merge_sort(arr, mid+1, high);
       merge(arr,low,mid, high);
   }
}


int main()
{

    int arr[8] = {45, 30, 20, 80, 25, 15, 50, 35};
    merge_sort(arr,0,7);
    for (int i = 0; i < 8; ++i)
    {
        cout<<arr[i]<<" ";
    }
}