#include<iostream>
#include "SingleLL.h"

using namespace std;

void delete_last_node(SingleLL *&head) {
    SingleLL *ptr =head;
    while (ptr->link->link) {
        ptr = ptr->link;
    }
    delete ptr->link;
    ptr->link = nullptr;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    delete_last_node(head);

    head->printLinkedList(head);
}