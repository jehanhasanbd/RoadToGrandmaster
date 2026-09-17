#include<iostream>
#include "DoubleLL.h"
using namespace std;

void addNodeAtBeg(DoubleLL *&head, int value) {
    DoubleLL *temp = new DoubleLL(value);
    temp->next = head;
    head->prev= temp;
    head = temp;
}

int main() {
    DoubleLL *head = DoubleLL::create_first_node(5);
    head->addNodeAtEnd(head, 7);
    head->addNodeAtEnd(head, 10);
    head->addNodeAtEnd(head, 12);
    head->addNodeAtEnd(head, 15);

    addNodeAtBeg(head,99);
    head->printDoubleLL(head);
}
