#include<iostream>
using namespace std;

int findMax(int *arr,int n, int index) {
    if (index == n) {
        return INT_MIN;
    }

    return max(arr[index] ,  findMax(arr,n,index+1));
}

int main() {
    int arr[8] = {4, 56, 8 , 96, 46, 55, 69, 69};
    cout<<findMax(arr,8,0);
}