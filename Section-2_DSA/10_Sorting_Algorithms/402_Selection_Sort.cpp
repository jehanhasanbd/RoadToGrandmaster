#include<iostream>
using namespace std;

void selection_sort(int n, int *arr)
{
    for (int i = 0; i < n-1; ++i) {
        int minIdx = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);

    }
}


int main()
{

    int arr[6] = {5, 2 ,4, 6, 1, 3};
    selection_sort(6, arr);
    for (int i = 0; i < 6; ++i)
    {
        cout<<arr[i]<<" ";
    }
}