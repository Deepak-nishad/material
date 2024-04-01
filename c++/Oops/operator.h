#include <iostream>
using namespace std;
#include <stdlib.h>

class myInt
{
    int *ptr;

public:
    myInt()
    {
        ptr = new int;
        *ptr = 0;
        cout << "\n Default constructor is called : -";
    }
    myInt(int n)
    {
        ptr = new int;
        *ptr = n;
        cout << "\n single parameterized constructor is called";
    }
    void display()
    {
        cout << *ptr << endl;
    }

    int getValue()
    {
        return *ptr;
    }
    void setValue(int a)
    {
        *ptr = a;
    }

    myInt operator+(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr + o.getValue());
        return temp;
    }
    myInt operator-(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr - o.getValue());
        return temp;
    }
    myInt operator*(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr - o.getValue());
    }

    myInt operator/(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr - o.getValue());
        return temp;
    }

    myInt operator%(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr - o.getValue());
        return temp;
    }

    ~myInt()
    {
        cout << "\n Destructor is called ....";
        delete ptr;
    }
};