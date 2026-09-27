#include<iostream>
using namespace std;

void printArr(int *arr,int n, int index) {
    if (index < 0) {
        return;
    }
    cout<<arr[index]<<" ";
    printArr(arr,n,index-1);
}

int main() {
    int arr[8] = {4, 56, 8 , 96, 46, 55, 69, 68};
    printArr(arr,8,7);
}