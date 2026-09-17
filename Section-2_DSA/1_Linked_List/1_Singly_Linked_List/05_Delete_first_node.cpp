#include<iostream>
#include "SingleLL.h"

using namespace std;

void delete_first_node(SingleLL *&head) {
    SingleLL *spam = head;
    head = head->link;
    delete spam;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    delete_first_node(head);

    head->printLinkedList(head);
}