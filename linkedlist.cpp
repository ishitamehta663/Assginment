#include<iostream>
using namespace std;

class Node {
public: int data;
        Node* next;

// Constructor
Node(int value) {
    data = value;
    next = nullptr;
}
};

class LinkedList { private:
    Node* head;
     public:  LinkedList() {
         head = nullptr; }

// Destructor
~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

// Function to add a new node to the end of the list
void append(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to display the list
void display() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
};

int main() {
LinkedList list;

// Add elements to the list
list.append(1);
list.append(2);
list.append(3);

// Display the list
list.display();

return 0;
}
