#include<iostream>
#include <vector>
using namespace std;

void count_sort(int n, int *arr)
{
    int frequency[100] = {0};
    vector<int> helping(n+1,0);
    for (int i = 0; i < n; ++i) {
        frequency[arr[i]]++;
    }
    for (int i = 1; i < 100; ++i) {
        frequency[i] += frequency[i-1];
    }
    for (int i = n-1; i >= 0; --i) {
        helping[ frequency[arr[i]] - 1] = arr[i];
        frequency[ arr[i] ]--;
    }
    for (int i = 0; i < n; ++i) {
        arr[i] = helping[i];
    }
}


int main()
{

    int arr[8] = {45, 30, 20, 80, 25, 15, 50, 35};
    count_sort(8,arr);
    for (int i = 0; i < 8; ++i)
    {
        cout<<arr[i]<<" ";
    }
}