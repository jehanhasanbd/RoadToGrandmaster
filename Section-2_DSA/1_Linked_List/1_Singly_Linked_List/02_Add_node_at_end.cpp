#include<iostream>
#include "SingleLL.h"

using namespace std;

void add_node_at_end(SingleLL *head, int value) {
    SingleLL *ptr = head;
    while (ptr->link) {
        ptr = ptr->link;
    }
    ptr->link = new SingleLL(value);
}

int main() {
    SingleLL *head;

    head = head->createFirstNode(8);
    head->addNodeAtEnd(head,9);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,11);
    head->printLinkedList(head);
}