#include<iostream>
using namespace std;

long long findProduct(int *arr,int n, int index) {
    if (index == n) {
        return 1;
    }

    return arr[index] *  findProduct(arr,n,index+1);
}

int main() {
    int arr[8] = {4, 56, 8 , 96, 46, 55, 69, 69};
    cout<<findProduct(arr,8,0);
}