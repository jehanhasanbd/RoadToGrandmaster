#include<iostream>
#include "SingleLL.h"

using namespace std;

void add_node_at_beg(SingleLL *&head, int value) {
    SingleLL *temp = new SingleLL(value);
    temp->link = head;
    head = temp;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,9);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,11);

    add_node_at_beg(head,7);
    head->printLinkedList(head);
}