#include<iostream>
using namespace std;

int findSum(int *arr,int n, int index) {
    if (index == n) {
        return 0;
    }

    return arr[index] +  findSum(arr,n,index+1);
}

int main() {
    int arr[8] = {4, 56, 8 , 96, 46, 55, 69, 69};
    cout<<findSum(arr,8,0);
}