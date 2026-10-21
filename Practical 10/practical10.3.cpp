
#include <iostream>
using namespace std;

int main() {
    int table[10];
    int n, id;

    for (int i = 0; i < 10; i++)
        table[i] = -1;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter student ID: ";
        cin >> id;

        int h1 = id % 10;
        int h2 = 7 - (id % 7);
        int index, j;

        for (j = 0; j < 10; j++) {
            index = (h1 + j * h2) % 10;

            if (table[index] == -1) {
                table[index] = id;
                break;
            }
        }

        if (j == 10)
            cout << "Hash table is full or no slot found!\n";
    }

    cout << "\nHash Table:\n";

    for (int i = 0; i < 10; i++)
        cout << i << " : " << table[i] << endl;

    return 0;
}
