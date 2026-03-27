#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string username, password;
    string storedUsernames[3];   
    string studentNames[3];
    int studentAges[3];
    string courses[3];
    int studentCount = 0;
    int courseCount = 0;
    bool loginSuccess = false;
    for (int i = 0; i < 3; i++) {
        cout << "Enter Username: ";
        cin >> username;
        storedUsernames[i] = username;
        cout << "Enter Password: ";
        cin >> password;
        if (username == "admin" && password == "1234") {
            cout << "Login Successful\n";
            loginSuccess = true;
            break;
        } else {
            cout << "Wrong Username or Password\n";
        }
    }
    if (!loginSuccess) {
        cout << "Access Denied. Program Terminated.\n";
        return 0;
    }
    int choice;
    do {
        cout << "\n--- University Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Add Course\n";
        cout << "4. View Courses\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            if (studentCount < 3) {
                cout << "Enter Student Name: ";
                cin >> studentNames[studentCount];
                cout << "Enter Student Age: ";
                cin >> studentAges[studentCount];
                studentCount++;
                cout << "Student Added Successfully\n";
            } else {
                cout << "Student limit reached (3 students only)\n";
            }
        }
        else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No students available\n";
            } else {
                cout << "\nStudent List:\n";
                for (int i = 0; i < studentCount; i++) {
                    cout << "Student " << i + 1 << ": "
                         << studentNames[i]
                         << " Age: " << studentAges[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            if (courseCount < 3) {
                cout << "Enter Course Name: ";
                cin >> courses[courseCount];
                courseCount++;
                cout << "Course Added Successfully\n";
            } else {
                cout << "Course limit reached (3 courses only)\n";
            }
        }
        else if (choice == 4) {
            if (courseCount == 0) {
                cout << "No courses available\n";
            } else {
                cout << "\nCourse List:\n";
                for (int i = 0; i < courseCount; i++) {
                    cout << "Course " << i + 1 << ": "
                         << courses[i] << endl;
                }
            }
        }
        else if (choice == 5) {
            cout << "Exiting Program...\n";
        }
        else {
            cout << "Invalid choice\n";
        }
    } while (choice != 5);
    return 0;
}