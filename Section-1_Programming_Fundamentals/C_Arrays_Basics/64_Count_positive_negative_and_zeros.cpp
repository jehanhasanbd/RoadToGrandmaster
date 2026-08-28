#include<iostream>
using namespace std;

void count_pos_neg(int n, int *arr, int &pos, int &neg, int &zero)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 0) {
            zero++;
        }
        else if (arr[i] > 0) {
            pos++;
        }
        else {
            neg++;
        }
    }
}

int main()
{
    int n,pos=0,neg=0,zero=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    count_pos_neg(n,arr,pos,neg,zero);
    cout<<pos<<" "<<neg<<" "<<zero;
}