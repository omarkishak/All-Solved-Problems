#include <iostream>
using namespace std;

class StackArray {
private:
    int* arr;
    int capacity;
    int top;

public:
    StackArray(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~StackArray() {
        delete[] arr;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    StackArray s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top after pop: " << s.peek() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class StackArray {
private:
    int* arr;
    int capacity;
    int top;

public:
    StackArray(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~StackArray() {
        delete[] arr;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    StackArray s(5);
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top after pop: " << s.peek() << endl;

    return 0;
}
