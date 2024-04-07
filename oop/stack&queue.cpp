#include <iostream>
#include<stack>
#include<queue>

class Stack {
private:
    std::stack<int> s;

public:
    void push(int value) {
        s.push(value);
    }

    void pop() {
        if (!s.empty()) {
            s.pop();
        }
    }

    int top() {
        if (!s.empty()) {
            return s.top();
        }
        return -1; // Stack is empty
    }

    bool isEmpty() {
        return s.empty();
    }
};

class Queue {
private:
    std::queue<int> q;

public:
    void enqueue(int value) {
        q.push(value);
    }

    void dequeue() {
        if (!q.empty()) {
            q.pop();
        }
    }

    int front() {
        if (!q.empty()) {
            return q.front();
        }
        return -1; // Queue is empty
    }

    bool isEmpty() {
        return q.empty();
    }
};

int main() {
    Stack s;
    Queue q;

    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Stack top: " << s.top() << std::endl;
    s.pop();
    std::cout << "Stack top after pop: " << s.top() << std::endl;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << "Queue front: " << q.front() << std::endl;
    q.dequeue();
    std::cout << "Queue front after dequeue: " << q.front() << std::endl;

    return 0;
}
