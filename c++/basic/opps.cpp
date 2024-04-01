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
//#include <iostream>
//using namespace std;
//#include "date_class.h"
//#include "time_class.h"
//#include "student.h"
//#include "scope.h"
//#include "mycomplex.h"
//#include "operator.h"
int main()
{
    // date obj1;
    // obj1.display();
    // date obj2(11);
    // obj2.display();
    // date obj3(29, 3, 2024);
    // obj3.display();

    // time_class tc;
    // tc.set_time(3, 11, 40);
    // tc.display();

    // student s1(50, 80, 85, 90);
    // s1.calculate_grade();
    // s1.get_grade();

    // circle c(4.5f);
    // cout << "\n\nGlobal var = " << gl_var;
    // i = 500;
    // c.display();

    // cout << "\n\nGlobal var = " << gl_var;
    // circle c2(6.5f);
    // c1.changeColor("Black");

    // c1.display();

    // c2.display();

    // mycomplex c;
    // c.display();
    // mycomplex c1(1);
    // c1.display();
    // mycomplex c2(2, 4);
    // c2.display();

    /*mycomplex c1(2, 3);
    mycomplex c2(5);
    mycomplex c3;

     ==   c1.operator+(c2)
    c3 = c1c3 = c1 + c2;.operator+(c2);a

    c3.display();
    */

    myInt m;
    m.display();

    myInt obj1(14);
    myInt obj2(10);
    myInt obj3(obj1);
    obj3 = obj1 % obj2;
    obj3.display();
}

