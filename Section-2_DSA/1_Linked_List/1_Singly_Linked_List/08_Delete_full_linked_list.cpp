#include<iostream>
#include "SingleLL.h"

using namespace std;

void delete_full_linked_list(SingleLL *&head) {
    SingleLL *ptr = head;
    while (ptr->link) {
        SingleLL *spam = ptr;
        ptr = ptr->link;
        delete spam;
    }
    head = nullptr;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    delete_full_linked_list(head);

    head->printLinkedList(head);
}