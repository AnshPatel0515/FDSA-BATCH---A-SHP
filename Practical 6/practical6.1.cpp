#include <iostream>
using namespace std;

int main() {
    int n, choice, tray;
    cout << "Enter stack capacity: ";
    cin >> n;

    int stack[100];
    int top = -1;

    cout << "Enter number of operations: ";
    int op;
    cin >> op;

    while (op--) {
        cout << "\n1. Place  2. Take: ";
        cin >> choice;

        if (choice == 1) {
            cin >> tray;

            if (top == n - 1)
                cout << "Error: Stack is Full\n";
            else {
                stack[++top] = tray;
                cout << "Top tray: " << stack[top] << endl;
            }
        }
        else if (choice == 2) {
            if (top == -1)
                cout << "Error: Stack is Empty\n";
            else {
                cout << "Taken tray: " << stack[top--] << endl;

                if (top == -1)
                    cout << "Stack is Empty\n";
                else
                    cout << "Current top tray: " << stack[top] << endl;
            }
        }
    }

    return 0;
}
