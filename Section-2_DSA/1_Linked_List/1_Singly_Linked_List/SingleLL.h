
class SingleLL {
public:
    int value;
    SingleLL *link;

    SingleLL(int value) {
        this->value = value;
        this->link = nullptr;
    }

    static  SingleLL* createFirstNode(int value) {
        return new SingleLL(value);
    }

    inline void addNodeAtEnd(SingleLL *head, int value) {
        SingleLL *ptr = head;
        while (ptr->link) {
            ptr = ptr->link;
        }
        ptr->link = new SingleLL(value);
    }

    inline void printLinkedList(SingleLL *head) {
        if (head==nullptr) {
            std::cout<<"The Linkdin List is Empty";
            return;
        }
        SingleLL *ptr = head;
        while (ptr) {
            std::cout<<ptr->value<<" ";
            ptr = ptr->link;
        }
    }

    inline int count_node(SingleLL *&head) {
        SingleLL *ptr = head;
        int count = 0;
        while (ptr->link) {
            count++;
            ptr = ptr->link;
        }
        return count;
    }
};




