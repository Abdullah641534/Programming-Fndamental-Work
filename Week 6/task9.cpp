#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    string books[100];
    int bookCount = 0;

    do {
        cout << "\n--- Library System Menu ---" << endl;
        cout << "1. Add Books" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Books" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> books[bookCount];
            bookCount++;
            cout << "Book added successfully!" << endl;
        }
        else if (choice == 2) {
            cout << "\nList of Books:" << endl;
            for (int i = 0; i < bookCount; i++) {
                cout << i + 1 << ". " << books[i] << endl;
            }
        }
        else if (choice == 3) {
            int index;
            cout << "Enter book number to borrow: ";
            cin >> index;

            if (index > 0 && index <= bookCount) {
                cout << "You borrowed: " << books[index - 1] << endl;
            } else {
                cout << "Invalid book number!" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 4);

    return 0;
}