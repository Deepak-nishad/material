#include <iostream>
using namespace std;

class BankAcc
{
    string name;
    int Acc_no;
    string type;
    int balance;

public:
    BankAcc()
    {
        balance = 0;
        Acc_no = 0;
        type = "....";
        name = "...";
    }
    void deposit(int amount)
    {
        this->balance = this->balance + amount;
    }
    BankAcc(int acountno, int bal, string nam, string typ)
    {
        this->Acc_no = acountno;
        this->balance = bal;
        this->name = nam;
        this->type = typ;
    }
    void display()
    {
        cout << this->balance << endl;
        cout << this->name << endl;
    }
    void withdraw(int am)
    {
        if (this->balance > am)
            this->balance = this->balance - am;
    }
    void init(int acountno, int bal, string nam, string typ)
    {
        this->Acc_no = acountno;
        this->balance = bal;
        this->name = nam;
        this->type = typ;
    }
    ~BankAcc()
    {
        cout << "destructor is called";
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
//#include "2_assignment.h"
//#include "1_assignment.h"
//#include "3_assignment.h"
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

    // myInt m;
    // m.display();

    // myInt obj1(14);
    // myInt obj2(10);
    // myInt obj3(obj1);
    // obj3 = obj1 - obj2;
    // obj3.display();

    // assignment 2
    // char s[10] = "Prudent";
    // char s1[10] = "Academy";
    // function_overload fc;
    // function_overload fc(s);
    // function_overload fc1(s, s1);
    // fc.display(s);
    // fc.display(s, s1);
    // return 0;

    // assignment 1
    // item itm('1', '2', '3', '4', '5', '6');
    // itm.display();

     BankAcc ba;
      ba.display();
    ba.init(34931624, 100000, "Deepak", "saving");
    ba.display();
}

