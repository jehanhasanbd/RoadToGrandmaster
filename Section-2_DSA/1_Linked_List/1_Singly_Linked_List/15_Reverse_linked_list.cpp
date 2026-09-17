#include<iostream>
#include "SingleLL.h"

using namespace std;

void reverse_linklist(SingleLL *&head) {
    SingleLL *prev = nullptr;
    SingleLL *curr = head;
    while (curr) {
        SingleLL *next = curr->link;
        curr->link = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    reverse_linklist(head);
    head->printLinkedList(head);


}