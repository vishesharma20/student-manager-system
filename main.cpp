#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

Student students[100];
int studentCount = 0;

void addStudent() {
    cout << "\n=== ADD STUDENT ===\n";

    cout << "Enter Name: ";
    cin >> students[studentCount].name;

    cout << "Enter Roll Number: ";
    cin >> students[studentCount].rollNo;

    cout << "Enter Marks: ";
    cin >> students[studentCount].marks;

    studentCount++;

    cout << "\nStudent Added Successfully!\n";
}

void displayStudents() {
    if (studentCount == 0) {
        cout << "\nNo students found.\n";
        return;
    }

    cout << "\n===== STUDENT LIST =====\n";

    for (int i = 0; i < studentCount; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Marks: " << students[i].marks << endl;
    }
}

void searchStudent() {
    int roll;

    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == roll) {
            cout << "\nStudent Found!\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Roll Number: " << students[i].rollNo << endl;
            cout << "Marks: " << students[i].marks << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}