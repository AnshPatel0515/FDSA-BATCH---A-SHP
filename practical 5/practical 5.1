#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string song;
    Node* prev;
    Node* next;
};

Node* head = NULL;
Node* tail = NULL;

void addBeginning(string song)
{
    Node* newNode = new Node();
    newNode->song = song;
    newNode->prev = NULL;
    newNode->next = head;

    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        head->prev = newNode;
        head = newNode;
    }
}

void addEnd(string song)
{
    Node* newNode = new Node();
    newNode->song = song;
    newNode->next = NULL;
    newNode->prev = tail;

    if (tail == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAfter(string givenSong, string newSong)
{
    Node* current = head;

    while (current != NULL && current->song != givenSong)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Song not found.\n";
        return;
    }

    Node* newNode = new Node();
    newNode->song = newSong;

    newNode->prev = current;
    newNode->next = current->next;

    if (current->next != NULL)
        current->next->prev = newNode;
    else
        tail = newNode;

    current->next = newNode;
}

void removeFirst()
{
    if (head == NULL)
    {
        cout << "Playlist is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;
    else
        tail = NULL;

    delete temp;
}

int countSongs()
{
    int count = 0;
    Node* current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

void display()
{
    Node* current = head;

    cout << "Playlist: ";

    if (current == NULL)
    {
        cout << "Empty\n";
        return;
    }

    while (current != NULL)
    {
        cout << current->song << " ";
        current = current->next;
    }

    cout << endl;
}

int main()
{
    int choice;
    string song, givenSong;

    do
    {
       
        cout << "1. Add at beginning\n";
        cout << "2. Add at end\n";
        cout << "3. Insert after a song\n";
        cout << "4. Remove first song\n";
        cout << "5. Count songs\n";
        cout << "6. Display playlist\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter song: ";
            cin >> song;
            addBeginning(song);
            display();
            break;

        case 2:
            cout << "Enter song: ";
            cin >> song;
            addEnd(song);
            display();
            break;

        case 3:
            cout << "Enter existing song: ";
            cin >> givenSong;
            cout << "Enter new song: ";
            cin >> song;
            insertAfter(givenSong, song);
            display();
            break;

        case 4:
            removeFirst();
            display();
            break;

        case 5:
            cout << "Number of songs: " << countSongs() << endl;
            break;

        case 6:
            display();
            break;

        case 0:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}
