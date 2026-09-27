#include<iostream>
using namespace std;

int reverse_number(int n, int rev) {
    if (n==0) {
        return rev;
    }
    return reverse_number(n/10, rev*10 + n%10);
}

bool checkPalindome(int n) {
    return n == reverse_number(n,0);
}

int main() {
    cout<<checkPalindome(7896987);
}