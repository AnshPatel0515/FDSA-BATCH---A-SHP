#include <iostream>
using namespace std;

class CircularQueue {
private:
    int *queue;
    int n;
    int front;
    int rear;
    int count;

public:
    CircularQueue(int size) {
        n = size;
        queue = new int[n];
        front = 0;
        rear = -1;
        count = 0;
    }

   
    void join(int token) {
        if (count == n) {
            cout << "Error: Queue is Full" << endl;
            return;
        }

        rear = (rear + 1) % n;
        queue[rear] = token;
        count++;

        cout << "Front: " << queue[front] << endl;
    }

   
    void serve() {
        if (count == 0) {
            cout << "Queue is Empty" << endl;
            return;
        }

        front = (front + 1) % n;
        count--;

        if (count == 0) {
            front = 0;
            rear = -1;
        }

        if (count > 0)
            cout << "Front: " << queue[front] << endl;
        else
            cout << "Queue is Empty" << endl;
    }

    ~CircularQueue() {
        delete[] queue;
    }
};

int main() {
    int n;
    cout << "Enter queue capacity: ";
    cin >> n;

    CircularQueue q(n);

    int operations;
    cout << "Enter number of operations: ";
    cin >> operations;

    for (int i = 0; i < operations; i++) {
        int choice, token;

        cout << "\n1. Join\n2. Serve\n";
        cout << "Enter operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter token number: ";
            cin >> token;
            q.join(token);
        }
        else if (choice == 2) {
            q.serve();
        }
        else {
            cout << "Invalid operation" << endl;
        }
    }

    return 0;
}
