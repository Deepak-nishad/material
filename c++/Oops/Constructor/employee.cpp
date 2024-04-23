#include <iostream>
using namespace std;
#include <cstring>
class Employee
{
    int emp_id;
    int salary;
    char name[20];

public:
    Employee()
    {
        this->emp_id = 0;
        this->salary = 10000;
        strcpy(this->name, "unknown");
        cout << "default construcor called" << endl;
    }
    Employee(int id, int sal, const char *ptr)
    {

        this->emp_id = id;
        this->salary = sal;
        strcpy(this->name, ptr);
        cout << "Parameter construcor called" << endl;
    }
    void display()
    {
        cout << this->emp_id << "   " << this->salary << "  " << this->name << endl;
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    // Employee e;
    // Employee e(101, 50000, "deepak");
    // e.display();

    Employee e1, e2, e3, e4;
    Employee emp[4];

    // shallow copy

    // Employee e(101, 50000, "deepak");
    // Employee e2 = e;
    // e.display();
    // e2.display();
}