class MyStack {
public:
int data;
MyStack* next;
MyStack* topNode;

    MyStack() {
        data = 0;
        next = nullptr;
        topNode = nullptr;
        
    }
    
    void push(int x) {
        MyStack* newNode = new MyStack();
        newNode->data = x;

        if(topNode == nullptr){
            topNode = newNode;
            return;
        }

        newNode->next = topNode;
        topNode = newNode;
    }
    
    int pop() {
        MyStack* temp = topNode;
        if(topNode->next == nullptr){
            topNode = nullptr;
            return temp->data;
        }

        topNode = topNode->next;
        
        return temp->data;
        
    }
    
    int top() {
        if(topNode == nullptr)
        return -1;

        return topNode->data;   
    }
    
    bool empty() {
        if(topNode == nullptr)
        return true;

        else
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */