#include<iostream>
#include "SingleLL.h"

using namespace std;

SingleLL* create_first_node(int value) {
    return new SingleLL(value);
}

int main() {
    SingleLL *head = create_first_node(8);
    cout<<head->value;
}