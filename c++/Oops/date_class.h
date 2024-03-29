class date
{

    int dd, mm, yy;

public:
    date()
    {
        cout << "\n Default constructor is called..";
        dd = 1;
        mm = 1;
        yy = 1999;
    }
    date(int n)
    {
        cout << "\n Single parameter constructor is called ... ";
        dd = n;
        mm = n;
        yy = 1900;
    }
    date(int a, int b, int c)
    {
        cout << "\n 3 parameter constructor is called..";
        dd = a;
        mm = b;
        yy = c;
    }
    void set_day(int d)
    {
        dd = d;
    }
    void set_month(int m)
    {
        mm = m;
    }
    void set_year(int y)
    {
        yy = y;
    }
    void set_date(int dd, int mm, int yy)
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    void display()
    {
        cout << "\n"
             << dd << " / " << mm << " / " << yy;
    }

    ~date()
    {
        cout << "\n destructor is called ..";
    }
};
