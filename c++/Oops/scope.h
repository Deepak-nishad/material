#include <iostream>
using namespace std;

int gl_var;
int i;

class circle
{

    int i;
    float rad;
    static string color;

public:
    circle()
    {
        i = 10;
        rad = 0.0f;
        color = "red";
    }
    circle(float r)
    {
        i = 10;
        color = "Red";
        gl_var = 10;
        rad = r;
    }
    void set_radius(float r)
    {
        rad = r;
    }
    float get_radius()
    {
        return rad;
    }
    float area()
    {
        float a = 3.14 * rad * rad;
        gl_var = 350;
        return a;
    }
    void changeColor(string c)
    {
        color = c;
    }
    void display()
    {
        int i = 5;
        gl_var = 450;

        cout << "\n i = " << i;
        cout << "\n this->i = " << this->i;
        cout << "\n global i = " << ::i;
        cout << "\n Color of Circle is " << color;
        cout << "\n Radius = " << rad;
        cout << "\n Area = " << area();
    }
};

string circle ::color = "Red";