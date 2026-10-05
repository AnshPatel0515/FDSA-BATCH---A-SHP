#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Stack
{
private:
    Node* top;

public:
    Stack()
    {
        top = nullptr;
    }

    void push(int value)
    {
        try
        {
            Node* newNode = new Node;

            newNode->data = value;
            newNode->next = top;
            top = newNode;

            cout << "Pushed: " << value << endl;
        }
        catch (bad_alloc&)
        {
            cout << "Stack Overflow: Memory is full!" << endl;
        }
    }

    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow: Stack is empty!" << endl;
            return;
        }

        Node* temp = top;
        cout << "Popped: " << top->data << endl;

        top = top->next;
        delete temp;
    }

    void display()
    {
        Node* temp = top;

        cout << "Stack: ";

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();

    return 0;
}
