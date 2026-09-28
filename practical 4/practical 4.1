#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};


void insertBeginning(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}


void insertEnd(Node*& head, int value) {
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAfter(Node*& head, int after, int value) {
    Node* temp = head;

    while (temp != NULL && temp->data != after)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Value not found\n";
        return;
    }

    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}


void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertEnd(head, value);
    }

    cout << "Original list: ";
    display(head);

    
    cout << "Enter value to insert at beginning: ";
    cin >> value;
    insertBeginning(head, value);

    cout << "Enter value to insert at end: ";
    cin >> value;
    insertEnd(head, value);

    int after;
    cout << "Enter value after which you want to insert: ";
    cin >> after;

    cout << "Enter value to insert: ";
    cin >> value;

    insertAfter(head, after, value);

    cout << "Final list: ";
    display(head);

    return 0;
}
