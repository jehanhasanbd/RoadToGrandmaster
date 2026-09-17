class DoubleLL {
public:
    int value;
    DoubleLL *next;
    DoubleLL *prev;

    DoubleLL(int value) {
        this->value = value;
        this->prev = nullptr;
        this->next = nullptr;
    }

    static DoubleLL* create_first_node(int value) {
        return new DoubleLL(value);
    }

    inline void addNodeAtEnd(DoubleLL *&head, int value) {
        DoubleLL *ptr = head;
        while (ptr->next) {
            ptr = ptr->next;
        }
        DoubleLL *temp = new DoubleLL(value);
        temp->prev = ptr;
        ptr->next = temp;
    }

    inline void printDoubleLL(DoubleLL *&head) {
        if (head == nullptr) {
            std::cout<<"LL is empty"<<std::endl;
            return;
        }
        DoubleLL *ptr=head;
        while (ptr) {
            std::cout<<ptr->value<<" ";
            ptr=ptr->next;
        }
    }
};