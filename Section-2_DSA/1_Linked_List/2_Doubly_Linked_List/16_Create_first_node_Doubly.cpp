#include<iostream>
#include "DoubleLL.h"
using namespace std;

DoubleLL* create_first_node(int value) {
    return new DoubleLL(value);
}

int main() {
    DoubleLL *head = create_first_node(5);
    cout<<head->value;
}