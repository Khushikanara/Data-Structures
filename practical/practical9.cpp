#include <iostream>
using namespace std;

struct node {
    int info;
    node* next;
};


node* first = NULL;

node* create_node(int x) {
    node* temp = new node;
    temp->info = x;
    temp->next =NULL;
    return temp;
}

void insert_first() {
    int x;
    cout << "Enter value: ";
    cin >> x;
    
    node* temp = create_node(x);
    if (first == NULL) {
        first = temp;
    } else {
        temp->next = first;
        first = temp;
    }
}

void insert_last() {
    int x;
    cout << "Enter value: ";
    cin >> x;
    
    node* temp = create_node(x);
    if (first == NULL) {
        first = temp;
        return;
    }
    
    node* curr = first;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = temp;
}

void insert_at_pos() {
    int pos, x;
    cout << "Enter position (1-based index): ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> x;

    if (pos <= 1 || first == NULL) {
        node* temp = create_node(x);
        temp->next = first;
        first = temp;
        return;
    }

    node* curr = first;
    for (int i = 1; i < pos - 1 && curr->next != NULL; i++) {
        curr = curr->next;
    }

    node* temp = create_node(x);
    temp->next = curr->next;
    curr->next = temp;
}

void display() {
    if (first == NULL) {
        cout << "List is empty.\n";
        return;
    }

    node* temp = first;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->info << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n1. Insert at first\n";
        cout << "2. Insert at last\n";
        cout << "3. Insert at position\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert_first();
                break;
            case 2:
                insert_last();
                break;
            case 3:
                insert_at_pos();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
    return 0;
}