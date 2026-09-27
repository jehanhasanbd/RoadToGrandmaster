#include<iostream>
using namespace std;

void printArr(int *arr,int n, int index) {
    if (index == n) {
        return;
    }
    cout<<arr[index]<<" ";
    printArr(arr,n,index+1);
}

int main() {
    int arr[8] = {4, 56, 8 , 96, 46, 55, 69, 69};
    printArr(arr,8,0);
}