// Student info system
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure for student info
struct Student {
    int rollno;
    string name;
};

// Functions
void adds(vector<Student>& Std);
void rems(vector<Student>& Std);
void edits(vector<Student>& Std);
void vis(const vector<Student>& Std);

// Add student
void adds(vector<Student>& Std) {
    Student temp;
    cout << "Enter student rollNo: ";
    cin >> temp.rollno;
    
    cout << "Enter student name: ";
    cin >> ws; 
    getline(cin, temp.name);

    Std.push_back(temp);
    cout << "Student added successfully!\n";
}

// Remove student
void rems(vector<Student>& Std) {
    int r;
    int confirmation;
    cout << "Enter Student RollNo to remove: ";
    cin >> r;

    int foundIndex = -1;
    for (size_t f = 0; f < Std.size(); f++) {
        if (Std[f].rollno == r) {
            foundIndex = f; 
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Are you sure you want to remove: " << Std[foundIndex].name 
             << "\nRollNo: " << Std[foundIndex].rollno << "\n";
        cout << "1. Yes\n2. No\nChoice: ";
        cin >> confirmation;

        if (confirmation == 1) {
            Std.erase(Std.begin() + foundIndex);
            cout << "Student deleted successfully!\n";
        } else {
            cout << "Deletion canceled.\n";
        }
    } else {
        cout << "Invalid RollNo.\n";
    }
}

// Edit Student
void edits(vector<Student>& Std) {
    int r;
    cout << "Enter Student RollNo to edit: ";
    cin >> r;

    int foundIndex = -1;
    for (size_t f = 0; f < Std.size(); f++) {
        if (Std[f].rollno == r) {
            foundIndex = f;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "Current information:\n";
        cout << "Name: " << Std[foundIndex].name << "\n";
        cout << "RollNo: " << Std[foundIndex].rollno << "\n\n";

        cout << "Enter new RollNo: ";
        cin >> Std[foundIndex].rollno;

        cout << "Enter new name: ";
        cin >> ws;
        getline(cin, Std[foundIndex].name);

        cout << "Student record updated!\n";
    } else {
        cout << "Invalid RollNo.\n";
    }
}

// View all Students
void vis(const vector<Student>& Std) {
    if (Std.empty()) {
        cout << "No student records found.\n";
        return;
    }

    cout << "\n--- Student List ---\n";
    for (size_t i = 0; i < Std.size(); i++) {
        cout << "Roll No: " << Std[i].rollno << " | Name: " << Std[i].name << "\n";
    }
    cout << "--------------------\n";
}

// Main function
int main() {
    vector<Student> Std;
    int x;
    bool running = true;

    while (running) {
        cout << "\nChoose an option:\n";
        cout << "1. Add a student\n";
        cout << "2. Remove a student\n";
        cout << "3. Edit a student\n";
        cout << "4. View all students\n";
        cout << "5. Exit\n";
        cout << "Choice: ";
        cin >> x;

        switch (x) {
        case 1:
            adds(Std);
            break;
        case 2:
            rems(Std);
            break;
        case 3:
            edits(Std);
            break;
        case 4:
            vis(Std);
            break;
        case 5:
            running = false;
            cout << "Exiting system. Goodbye!\n";
            break;
        default:
            cout << "Invalid option! Try again.\n";
            break;
        }
    }

    return 0;
}