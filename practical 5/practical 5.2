#include <iostream>
using namespace std;


struct SNode
{
    int student;
    SNode* next;
};

SNode* shead = NULL;

void singlyJoin(int student)
{
    SNode* newNode = new SNode;
    newNode->student = student;

    
    if (shead == NULL)
    {
        shead = newNode;
        newNode->next = shead;
        return;
    }

    SNode* temp = shead;

  
    while (temp->next != shead)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = shead;
}

void singlyLeave(int student)
{
    if (shead == NULL)
    {
        cout << "Singly circle is empty.\n";
        return;
    }

    SNode* current = shead;
    SNode* previous = NULL;

    do
    {
        if (current->student == student)
            break;

        previous = current;
        current = current->next;

    } while (current != shead);

    if (current->student != student)
    {
        cout << "Student not found.\n";
        return;
    }

    if (current == shead && current->next == shead)
    {
        shead = NULL;
        delete current;
        return;
    }

    if (current == shead)
    {
        SNode* last = shead;

        while (last->next != shead)
        {
            last = last->next;
        }

        shead = shead->next;
        last->next = shead;

        delete current;
        return;
    }

    previous->next = current->next;
    delete current;
}

void displaySingly()
{
    if (shead == NULL)
    {
        cout << "Singly Circle: Empty\n";
        return;
    }

    SNode* temp = shead;

    cout << "Singly Circle: ";

    do
    {
        cout << temp->student << " ";
        temp = temp->next;

    } while (temp != shead);

    cout << endl;
}



struct DNode
{
    int student;
    DNode* next;
    DNode* prev;
};

DNode* dhead = NULL;

void doublyJoin(int student)
{
    DNode* newNode = new DNode;
    newNode->student = student;


    if (dhead == NULL)
    {
        dhead = newNode;

        newNode->next = dhead;
        newNode->prev = dhead;

        return;
    }

    DNode* last = dhead->prev;

    newNode->next = dhead;
    newNode->prev = last;

    last->next = newNode;
    dhead->prev = newNode;
}

void doublyLeave(int student)
{
    if (dhead == NULL)
    {
        cout << "Doubly circle is empty.\n";
        return;
    }

    DNode* current = dhead;

    do
    {
        if (current->student == student)
            break;

        current = current->next;

    } while (current != dhead);

    if (current->student != student)
    {
        cout << "Student not found.\n";
        return;
    }

    if (current->next == current)
    {
        dhead = NULL;
        delete current;
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;

    if (current == dhead)
    {
        dhead = current->next;
    }

    delete current;
}

void displayDoubly()
{
    if (dhead == NULL)
    {
        cout << "Doubly Circle: Empty\n";
        return;
    }

    DNode* temp = dhead;

    cout << "Doubly Circle: ";

    do
    {
        cout << temp->student << " ";
        temp = temp->next;

    } while (temp != dhead);

    cout << endl;
}



int main()
{
    int n;
    int choice;
    int student;

    cout << "Enter number of operations: ";
    cin >> n;

    while (n--)
    {
        cout << "\n1. Join Student\n";
        cout << "2. Leave Student\n";
        cout << "3. Display Circle\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter student ID: ";
            cin >> student;

            singlyJoin(student);
            doublyJoin(student);

            cout << "After joining:\n";
            displaySingly();
            displayDoubly();
        }

        else if (choice == 2)
        {
            cout << "Enter student ID to leave: ";
            cin >> student;

            singlyLeave(student);
            doublyLeave(student);

            cout << "After leaving:\n";
            displaySingly();
            displayDoubly();
        }

        else if (choice == 3)
        {
            displaySingly();
            displayDoubly();
        }

        else
        {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
