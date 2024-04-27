#include <iostream>
#include <cstring>
using namespace std;
class Employee
{
    char *nameptr;
    float salary;

public:
    Employee()
    {
        cout << "Deafult base class constructor invoked" << endl;
        nameptr = new char;
        *nameptr = '\0';
        this->salary = 0.0f;
    }
    Employee(const char name[20], float salary)
    {
        cout << "base class Parameterized constructor invoked ........"
             << "\n";
        nameptr = new char[strlen(name) + 1];
        strcpy(nameptr, name);
        this->salary = salary;
    }
    Employee(Employee &eref)
    {
        cout << "copy constructor invoked ";
        nameptr = new char[strlen(eref.nameptr) + 1];
        strcpy(nameptr, eref.nameptr);
        salary = eref.salary;
    }
    float get_salary()
    {
        return salary;
    }

    char *get_name()
    {
        return nameptr;
    }
    ~Employee()
    {
        cout << "Destructor invoked ........"
             << "\n";
        delete nameptr;
    }
};

class Manager : public Employee
{
};
int main()
{
}