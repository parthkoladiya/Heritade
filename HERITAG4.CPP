#include <iostream.h>
#include <conio.h>
#include <string.h>

class Person
{
private:
    char name[50];
    int age;

public:
    Person() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() 
    {
        cout << "Name: " << name;
        cout << "Age: " << age;
    }
};

class Employee : public Person {
protected:
    int empId;
    char designation[50];

public:
    Employee() {
	cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter designation: ";
        cin >> designation;
    }

    void displayEmployee() {
        display();
        cout << "Employee ID: " << empId;
        cout << "Designation: " << designation;
    }
};

class Salary : public Employee {
private:
    double salary;

public:
    Salary() {
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displaySalary() {
        displayEmployee();
        cout << "Salary: $" << salary;
    }
};

void main() 
{
    clrscr();
    Salary s;
    s.displaySalary();
    getch();
}
