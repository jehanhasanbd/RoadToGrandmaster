#include<iostream>
#include "DoubleLL.h"
using namespace std;

void addNodeAtEnd(DoubleLL *&head, int value) {
    DoubleLL *ptr = head;
    while (ptr->next) {
        ptr = ptr->next;
    }
    DoubleLL *temp = new DoubleLL(value);
    ptr->next = temp;
    temp->prev = ptr;
}

int main() {
    DoubleLL *head = DoubleLL::create_first_node(5);
    addNodeAtEnd(head, 7);
    addNodeAtEnd(head, 10);
    addNodeAtEnd(head, 12);
    addNodeAtEnd(head, 15);
    head->printDoubleLL(head);
}
