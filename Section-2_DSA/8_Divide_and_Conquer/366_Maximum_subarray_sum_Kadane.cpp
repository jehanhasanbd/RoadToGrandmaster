#include<iostream>
using namespace std;

int maximum_crossing_sum(int *arr,int low,int mid, int high) {
    int sum = 0, leftMax = INT_MIN;
    for (int i = mid; i >= low; --i) {
        sum += arr[i];
        leftMax = max(leftMax, sum);
    }
    int rightMax = INT_MIN;
    sum = 0;
    for (int i = mid+1; i <= high; ++i) {
        sum += arr[i];
        rightMax = max(rightMax, sum);
    }
    return leftMax + rightMax;
}

int maximum_subarray_sum(int *arr,int low, int high)
{
    if ( low == high ) {
        return arr[low];
    }
    int mid = (low+high)/2;
    int leftSum = maximum_subarray_sum(arr, low, mid);
    int rightSum = maximum_subarray_sum(arr, mid+1, high);
    int crossSum = maximum_crossing_sum(arr, low, mid, high);
    return max(max(leftSum, rightSum), crossSum);
}


int main()
{
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maximum_subarray_sum(arr,0,8);
}