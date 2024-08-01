#include <iostream>
using namespace std;

const int size = 30;

class Person {
protected:
    char name[size];
    int age;
    int ID;

public:
    void read() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter ID: ";
        cin >> ID;
    }

    void display() {
        cout << "The person information is:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << ID << endl;
    }
};

class Employee : public Person {
protected:
    char designation[size];
    float basic_salary;
    float total_overtime;
    float hourly_rate;

public:
    void read() {
        Person::read();
        cout << "Enter designation: ";
        cin >> designation;
        cout << "Enter basic salary: ";
        cin >> basic_salary;
        cout << "Enter total overtime (hours): ";
        cin >> total_overtime;
        cout << "Enter hourly rate: ";
        cin >> hourly_rate;
    }

    void display() {
        Person::display();
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << basic_salary << endl;
        cout << "Total Overtime (hours): " << total_overtime << endl;
        cout << "Hourly Rate: " << hourly_rate << endl;
    }
};

class ComputedSalary : public Employee {
public:
    void read() {
        Employee::read();
    }

    void display() {
        Employee::display();
        cout << "Total Salary: " << calculateTotalSalary() << endl;
    }

    float calculateTotalSalary() {
        return basic_salary + (total_overtime * hourly_rate);
    }
};

int main() {
    ComputedSalary employee;
    employee.read();
    employee.display();

    return 0;
}
