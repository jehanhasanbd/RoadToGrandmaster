#include<iostream>
#include "SingleLL.h"

using namespace std;

int count_node(SingleLL *&head) {
    SingleLL *ptr = head;
    int count = 0;
    while (ptr->link) {
       count++;
        ptr = ptr->link;
    }
    return count;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    cout<<count_node(head);

    head->printLinkedList(head);
}