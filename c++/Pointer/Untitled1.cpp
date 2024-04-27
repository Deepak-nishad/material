#include <iostream>
using namespace std;

// class
class Distance
{
    int meter;
    int centimeter;

public:
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }
    Distance(int meter, int centimeter)
    {
        this->meter = meter;
        this->centimeter = centimeter;
    }

    Distance operator+(Distance d)
    {
        Distance temp;
        temp.centimeter = centimeter + d.centimeter;
        if (temp.centimeter >= 100)
        {
            temp.centimeter -= 100;
            temp.meter++;
        }
        temp.meter += meter + d.meter;
        return temp;
    }
    Distance operator++()
    {
        this->meter++;
        return *this;
    }

    Distance operator++(int x)
    {
        cout << x << endl;
        this->meter++;
        return *this;
    }

    Distance operator=(Distance d)
    {
        this->meter = d.meter;
        this->centimeter = d.centimeter;
        return *this;
    }

    Distance operator+=(Distance d)
    {

        this->meter += d.meter;
        this->centimeter += d.centimeter;
        if (this->centimeter >= 100)
        {                            // check for meter correction
            this->centimeter -= 100; // reduce centimeter
            this->meter++;           // increment meter by 1
        }
        return *this;
    }

    friend Distance &operator+(Distance d, int m);

    void display()
    {
        cout << meter << "m " << centimeter << "cm"
             << "\n";
    }
};

int main()
{
    Distance d1(4, 20), d2(2, 20), d;
    d = d1 + d2; // d1.opeartor + (d2) // if ant state ment like this -> obj3=tempobj   => obj3.operator = (tempobj)

    // d.display();

    // d = ++d1;
    // d.display();

    // d = d2++;
    // d.display();
    // Distance d3 = d;
    // d3.display();
    d = d1 + 10;
    d.display();
     d1.display();
}

Distance & operator+(Distance d, int m)
{
    d.meter += m;
    return d;
}

