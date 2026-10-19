// Lab 03 - Variables, Data Types & I/O (Tasks 1-4)
#include <iostream>
#include <string>
using namespace std;

/*
  VARIABLE: a named memory location that stores data which can
  change while the program runs. Example: int age = 20;

  CIN: reads input from the keyboard into a variable.  cin >> age;

  COUT: prints text and values to the screen.  cout << "Hello";
*/

int main() {
    string name;        // text
    int age;            // whole number
    float gpa;          // decimal number
    string department;  // Task 3

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;
    cout << "Enter department: ";
    cin >> department;

    int birthYear = 2026 - age;   // Task 4

    cout << endl;
    cout << "Student Information" << endl;
    cout << "-----------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}


// Lab 03 - Task 5: Using different data types
#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    double fee = 45000.75;

    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;
    return 0;
}