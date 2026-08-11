#include <iostream>
#include <string>
using namespace std;

// ---------- Colors ----------
#define DEFAULT "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"

// ---------- Structure ----------
struct Student
{
    string name;
    int age;
    char grade;
};

// ---------- Function Prototypes ----------
void inputStudents(Student students[], int n);
void displayStudents(Student students[], int n);
void editStudent(Student students[], int n);

// ---------- Main ----------
int main()
{
    int n;

    cout << CYAN << "Enter number of students: " << DEFAULT;
    cin >> n;
    cin.ignore();

    Student students[n];   // Variable Length Array (works in GCC)

    int choice;

    do
    {
        cout << endl;
        cout << BOLD << BLUE;
        cout << "========== STUDENT MANAGEMENT ==========\n";
        cout << DEFAULT;
        cout << "1. Enter Student Information\n";
        cout << "2. Display Students\n";
        cout << "3. Edit Student\n";
        cout << "4. Change Number of Students\n";
        cout << "5. Exit\n";
        cout << "Enter choice : ";
        cin >> choice;
        cin.ignore();

        switch(choice)
        {
            case 1:
                inputStudents(students, n);
                break;

            case 2:
                displayStudents(students, n);
                break;

            case 3:
                editStudent(students, n);
                break;

            case 4:
            {
                cout << CYAN << "Enter new number of students: " << DEFAULT;
                cin >> n;
                cin.ignore();

                Student newStudents[n];

                inputStudents(newStudents, n);

                for(int i = 0; i < n; i++)
                    students[i] = newStudents[i];

                break;
            }

            case 5:
                cout << GREEN << "\nThank you!\n" << DEFAULT;
                break;

            default:
                cout << RED << "Invalid Choice!\n" << DEFAULT;
        }

    } while(choice != 5);

    return 0;
}

// ---------- Input ----------
void inputStudents(Student students[], int n)
{
    cout << GREEN << "\nENTER STUDENT DETAILS\n\n" << DEFAULT;

    for(int i = 0; i < n; i++)
    {
        cout << YELLOW << "Student " << i + 1 << DEFAULT << endl;

        cout << "Name : ";
        getline(cin, students[i].name);

        cout << "Age : ";
        cin >> students[i].age;

        cout << "Grade : ";
        cin >> students[i].grade;

        cin.ignore();

        cout << endl;
    }
}

// ---------- Display ----------
void displayStudents(Student students[], int n)
{
    cout << CYAN << "\nSTUDENT RECORDS\n\n" << DEFAULT;

    for(int i = 0; i < n; i++)
    {
        cout << BOLD << "Student " << i + 1 << DEFAULT << endl;
        cout << "Name  : " << students[i].name << endl;
        cout << "Age   : " << students[i].age << endl;
        cout << "Grade : " << students[i].grade << endl;
        cout << "---------------------------\n";
    }
}

// ---------- Edit ----------
void editStudent(Student students[], int n)
{
    int id;

    cout << "Enter student number (1-" << n << ") : ";
    cin >> id;
    cin.ignore();

    if(id < 1 || id > n)
    {
        cout << RED << "Invalid Student Number!\n" << DEFAULT;
        return;
    }

    id--;

    cout << GREEN << "\nEditing Student " << id + 1 << DEFAULT << endl;

    cout << "New Name : ";
    getline(cin, students[id].name);

    cout << "New Age : ";
    cin >> students[id].age;

    cout << "New Grade : ";
    cin >> students[id].grade;

    cin.ignore();

    cout << GREEN << "\nRecord Updated Successfully!\n" << DEFAULT;
}
