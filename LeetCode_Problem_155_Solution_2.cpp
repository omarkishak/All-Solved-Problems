class Node {
public:
    int value;
    Node* next;

    Node() {
        value = 0;
        next = nullptr;
    }
};

class MinStack {
public:
    Node* Top;
    MinStack() { Top = nullptr; }

    void push(int val) {
        Node* newNode = new Node();
        newNode->value = val;
        newNode->next = Top;
        Top = newNode;
    }

    void pop() {

        Node* temp = Top;
        Top = Top->next;
        delete temp;
    }

    int top() { return Top->value; }

    int getMin() {
        int min = Top->value;
        Node* temp = Top;

        while (temp->next != nullptr) {
            temp = temp->next;

            if (temp->value < min)
                min = temp->value;
        }

        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */