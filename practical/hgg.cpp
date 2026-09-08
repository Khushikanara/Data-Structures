#include<iostream>
using namespace std;

void traversal(int array[], int size) {
    if (size == 0) {
        cout << "ERROR : empty array" << endl;
        return; // FIXED: Removed 'return 0;' from a void function
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " "; // FIXED: Removed endl so it prints on one line
    }
    cout << endl;
}

// FIXED: Passed size by reference (&size) so the size updates in main()
void insertion(int array[], int &size, int element, int capacity, int index) {
    // FIXED: Used '==' instead of '='
    if (size == capacity || index >= capacity) {
        cout << "Cannot insert, array is full or index is out of bounds." << endl;
        return; // FIXED: Cannot 'return false;' in a void function
    }
    
    if (index <= size) {
        // FIXED: Initialized with '=', stopped at i > index to avoid array[-1]
        for (int i = size; i > index; i--) {
            array[i] = array[i - 1];    
        }
        array[index] = element;
        size++; // FIXED: Increase the size of the array
    } else {
        array[index] = element;
        size = index + 1;
    }
}

// FIXED: Passed size by reference (&size)
void deletation(int array[], int &size, int index) {
    if (index >= size || index < 0) { // FIXED: Better boundary check
        cout << "Index of array is invalid" << endl;
        return;
    }
    
    // FIXED: Initialized with '=', and correctly shifted elements to the left
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--; // FIXED: Decrease the size of the array
}

void searching(int array[], int size, int element) {
    bool found = false;
    // FIXED: Initialized with '=', and checked i < size
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            cout << "Searching element index is: " << i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Element not found." << endl;
    }
}

int main() {
    int array[15] = {11, 12, 13, 14, 15};
    int curentsize = 5;
    int capacity = 15;
    int element;
    int index01;
    int index02;
    
    // FIXED: Removed the stray '-' that was here

    cout << "\n--- TRAVERSAL ---" << endl;
    traversal(array, curentsize);

    cout << "\n--- INSERTING ---" << endl;
    cout << "Which element you want to insert: ";
    cin >> element;
    cout << "Where you want to insert (index): ";
    cin >> index01; // FIXED: Changed << to >> and used declared variable index01
    
    // FIXED: Passed 'array' instead of 'array[]'
    insertion(array, curentsize, element, capacity, index01);
    traversal(array, curentsize); // Print array to see the result

    cout << "\n--- DELETION ---" << endl;
    cout << "Enter index to delete: ";
    cin >> index02; // FIXED: Changed << to >> and used index02
    
    // FIXED: Passed 'array' instead of 'array[]'
    deletation(array, curentsize, index02);
    traversal(array, curentsize); // Print array to see the result

    cout << "\n--- SEARCHING ---" << endl;
    cout << "Enter element to search for: ";
    cin >> element; // Reusing element variable for the search
    
    // FIXED: Passed 'array' instead of 'array[]'
    searching(array, curentsize, element);

    return 0;
}