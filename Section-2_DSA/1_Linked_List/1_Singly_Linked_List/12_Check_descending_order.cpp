#include<iostream>
#include "SingleLL.h"

using namespace std;

bool check_descending(SingleLL *&head) {
    return head==nullptr || head->link==nullptr || (head->value >= head->link->value && check_descending(head->link));
}

int main() {
    SingleLL *head = nullptr;

    head = SingleLL::createFirstNode(8);
    head->addNodeAtEnd(head,10);
    head->addNodeAtEnd(head,15);
    head->addNodeAtEnd(head,19);
    head->addNodeAtEnd(head,22);

    cout<<check_descending(head);

}