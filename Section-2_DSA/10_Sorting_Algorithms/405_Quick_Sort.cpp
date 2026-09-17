#include<iostream>
#include<vector>
using namespace std;

int partition_pivot(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low-1;

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);
    return i+1;
}

void quick_sort(int *arr, int low, int high)
{
    if (low < high) {
        int pivot = partition_pivot(arr,low, high);
        quick_sort(arr,low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}


int main()
{
    int arr[8] = {45, 30, 20, 80, 25, 15, 50, 35};
    quick_sort(arr,0,7);
    for (int i = 0; i < 8; ++i)
    {
        cout<<arr[i]<<" ";
    }
}