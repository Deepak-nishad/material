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

    void set_increment_sec(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
        if (s == 59)
        {
            mm++;
            if (m == 59 && s == 59)
            {

                hh++;
            }
        }
    }
};

int main()
{
    time_class tc;
    // tc.set_time(6, 14, 40);
    // tc.set_min(20);
    tc.set_increment_sec(6, 14, 59);
    tc.display();
}
