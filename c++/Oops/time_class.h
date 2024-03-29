#include <iostream>
using namespace std;
class time_class
{
    int hh, mm, ss;

public:
    void set_time(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    void set_hours(int h)
    {
        hh = h;
    }
    void set_min(int m)
    {
        mm = m;
    }
    void set_sec(int s)
    {
        ss = s;
    }
    void display()
    {
        cout << hh << " " << mm << " " << ss << endl;
    }
};
