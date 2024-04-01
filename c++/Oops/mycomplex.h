#include <iostream>
using namespace std;
class mycomplex
{
    int real, imag;

public:
    mycomplex()
    {
        cout << "\n default constructor called :- ";
        real = 0;
        imag = 0;
    }
    mycomplex(int i)
    {
        cout << "\n Single parameter constructor is called : ";
        real = i;
        imag = i;
    }
    mycomplex(int i, int j)
    {
        cout << "\n two  parameter constructor is called : ";
        real = i;
        imag = j;
    }
    void display()
    {
        cout << "\n " << real << " +" << imag << "i";
    }
    mycomplex operator+(mycomplex c)
    {
        mycomplex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }
    ~mycomplex()
    {
        cout << "\n destructor is called";
    }
};
