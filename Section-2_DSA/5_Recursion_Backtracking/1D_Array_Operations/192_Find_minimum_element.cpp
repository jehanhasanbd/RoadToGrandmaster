#include<iostream>
using namespace std;

int findMin(int *arr,int n, int index) {
    if (index == n) {
        return INT_MAX;
    }

    return min(arr[index] ,  findMin(arr,n,index+1));
}

int main() {
    int arr[8] = {4, 56, 8 , 96, 46, 55, 69, 69};
    cout<<findMin(arr,8,0);
}