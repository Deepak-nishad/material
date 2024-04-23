#include <iostream>
using namespace std;
int main()
{

    cout << sizeof(int) << endl;

    int a = 10;
    cout << "value of a" << a << endl;
    cout << "Address of a is " << &a << endl;

    int *ptr = NULL;

    ptr = &a;
    cout << "value of a with pointer" << (*ptr) << endl;

    ptr = ptr + 3;
    cout << (*ptr) << endl;

    ptr = ptr + 3 * 2;
    cout << *ptr;
}