#include<iostream>
#include "SingleLL.h"

using namespace std;

void add_node_at_pos(SingleLL *&head, int value,int pos) {
    SingleLL *temp = new SingleLL(value);
    SingleLL *ptr = head;
    while (pos != 1) {
        ptr = ptr->link;
        pos--;
    }
    temp->link = ptr->link;
    ptr->link = temp;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    add_node_at_pos(head,99,6);

    head->printLinkedList(head);
}