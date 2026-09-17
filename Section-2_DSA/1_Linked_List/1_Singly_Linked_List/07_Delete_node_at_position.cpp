#include<iostream>
#include "SingleLL.h"

using namespace std;

void delete_last_node(SingleLL *&head, int pos) {
    if (pos >= head->count_node(head)) {
        cout<<"Out of bound"<<endl;
        return;
    }
    SingleLL *ptr = head;
    while (pos != 1) {
        ptr = ptr->link;
        pos--;
    }
    SingleLL *spam = ptr->link;
    ptr->link = ptr->link->link;
    delete spam;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    delete_last_node(head,6);

    head->printLinkedList(head);
}