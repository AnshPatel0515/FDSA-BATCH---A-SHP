#include <iostream>
using namespace std;

struct Node
{
    int patient;
    Node* next;

    Node(int p)
    {
        patient = p;
        next = nullptr;
    }
};

class Queue
{
private:
    Node* front;
    Node* rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    
    void arrive(int patient)
    {
        Node* newNode = new Node(patient);

        if (rear == nullptr)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }


    void attend()
    {
        if (front == nullptr)
        {
            cout << "Ward is empty - No patient to attend" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if (front == nullptr)
        {
            rear = nullptr;
        }

        delete temp;
    }

  
    void showFront()
    {
        if (front == nullptr)
        {
            cout << "Front: Empty" << endl;
        }
        else
        {
            cout << "Front: " << front->patient << endl;
        }
    }
};

int main()
{
    Queue q;

    q.arrive(101);
    q.showFront();

    q.arrive(102);
    q.showFront();

    q.arrive(103);
    q.showFront();

    q.attend();
    q.showFront();

    q.attend();
    q.showFront();

    q.attend();
    q.showFront();

    q.attend();

    return 0;
}
