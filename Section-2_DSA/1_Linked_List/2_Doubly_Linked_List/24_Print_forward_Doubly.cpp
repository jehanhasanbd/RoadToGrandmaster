#include<iostream>
#include "DoubleLL.h"
using namespace std;

void printDoubleLL(DoubleLL *&head) {
    if (head == nullptr) {
        std::cout<<"LL is empty"<<endl;
        return;
    }
    DoubleLL *ptr=head;
    while (ptr) {
        std::cout<<ptr->value<<" ";
        ptr=ptr->next;
    }
}

int main() {
    DoubleLL *head = DoubleLL::create_first_node(5);
    head->addNodeAtEnd(head, 7);
    head->addNodeAtEnd(head, 10);
    head->addNodeAtEnd(head, 12);
    head->addNodeAtEnd(head, 15);
    printDoubleLL(head);
}