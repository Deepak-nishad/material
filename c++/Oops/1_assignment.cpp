#include <iostream>
#include <cstring>
using namespace std;

class item
{
    char itemcode[3];
    char itemname[20];
    float rate;

public:
    item()
    {
        cout << "constructor called  ";
        strcpy(itemcode, "pu");
        strcpy(itemname, "nashik");
        rate = 5.3;
    }

    item(const char a[3], const char b[20], float c)
    {
        cout << "parameter constructor called   ";
        strcpy(itemcode, a);
        strcpy(itemname, b);
        rate = c;
    }

    const char *get_itemcode()
    {
        return itemcode;
    }
    void set_itemcode(const char *x)
    {
        strcpy(itemcode, x);
    }

    const char *get_itemname()
    {
        return itemname;
    }
    void set_itemname(const char *y)
    {
        strcpy(itemname, y);
    }

    float get_float()
    {
        return rate;
    }
    void set_float(float z)
    {
        rate = z;
    }

    void display()
    {
        cout << "\n itemcode is:-" << itemcode << "\n itemname is :-" << itemname << "\n rate is:-" << rate << "\n";
    }
};

int main()
{
    item obj1;
    obj1.display();

    item obj2("AB", "XYZ", 30);
    obj2.display();

    return 0;
}
