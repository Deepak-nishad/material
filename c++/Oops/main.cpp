#include <iostream>
using namespace std;
#include "date_class.h"
#include "time_class.h"
#include "student.h"
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
    student s1(50, 80, 85, 90);
    s1.calculate_grade();
    s1.get_grade();
}
