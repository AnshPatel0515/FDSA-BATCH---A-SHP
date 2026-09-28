#include <iostream>
using namespace std;

struct Node
{
    int token;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int token)
{
    Node* newNode = new Node();
    newNode->token = token;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}


void deleteByValue(int value)
{
    if (front == NULL)
    {
        cout << "Queue is empty.\n";
        return;
    }

    if (front->token == value)
    {
        Node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
        cout << "Token deleted.\n";
        return;
    }

    Node* current = front;

    while (current->next != NULL &&
           current->next->token != value)
    {
        current = current->next;
    }

    if (current->next == NULL)
    {
        cout << "Token not found.\n";
        return;
    }

    Node* temp = current->next;
    current->next = temp->next;

    if (temp == rear)
        rear = current;

    delete temp;

    cout << "Token deleted.\n";
}

void displayForward()
{
    Node* current = front;

    if (current == NULL)
    {
        cout << "Queue is empty.\n";
        return;
    }

    cout << "Queue (Front to Back): ";

    while (current != NULL)
    {
        cout << current->token << " ";
        current = current->next;
    }

    cout << endl;
}


void displayReverse(Node* current)
{
    if (current == NULL)
        return;

    displayReverse(current->next);

    cout << current->token << " ";
}

int main()
{
    int n, token, value;

    cout << "Enter number of patients: ";
    cin >> n;

    cout << "Enter patient tokens:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> token;
        enqueue(token);
    }

    cout << "\n";
    displayForward();

    cout << "Enter token to delete: ";
    cin >> value;

    deleteByValue(value);

    cout << "\nAfter deletion:\n";
    displayForward();

    cout << "Queue (Back to Front): ";
    displayReverse(front);
    cout << endl;

    return 0;
}
