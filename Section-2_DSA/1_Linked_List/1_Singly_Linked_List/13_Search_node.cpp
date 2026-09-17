#include<iostream>
#include "SingleLL.h"

using namespace std;

int find_node(SingleLL *&head, int find) {
    SingleLL *ptr = head;
    int count = 0;
    while (ptr) {
        if (ptr->value == find) {
            return count;
        }
        ptr=ptr->link;
        count++;
    }
    return -1;
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    cout<<find_node(head,19);


}