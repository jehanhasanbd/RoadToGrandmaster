#include<iostream>
using namespace std;

void bubble_sort(int n, int *arr)
{
    for (int i = 0; i < n-1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n-1-i; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
}


int main()
{

    int arr[6] = {5, 2 ,4, 6, 1, 3};
    bubble_sort(6, arr);
    for (int i = 0; i < 6; ++i)
    {
        cout<<arr[i]<<" ";
    }
}