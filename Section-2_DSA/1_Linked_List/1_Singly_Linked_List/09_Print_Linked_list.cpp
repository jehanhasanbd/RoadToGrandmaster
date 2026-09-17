#include<iostream>
#include "SingleLL.h"

using namespace std;

void print_linked_list(SingleLL *head) {
    SingleLL *ptr = head;
    while (ptr) {
        cout<<ptr->value<<" ";
        ptr = ptr->link;
    }
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,9);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,11);
    print_linked_list(head);
}