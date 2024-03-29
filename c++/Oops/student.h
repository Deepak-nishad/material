#include <iostream>
using namespace std;
#include <string>
class student
{
    int rno, mk1, mk2, mk3, total;
    string name;
    char grade;

public:
    void set_name(string name)
    {
        this->name = name;
    }

    student(int rno, int mk1, int mk2, int mk3)
    {
        this->rno = rno;
        this->mk1 = mk1;
        this->mk2 = mk2;
        this->mk3 = mk3;
    }
    void get_grade()
    {
        cout << grade << endl;
    }
    void calculate_grade()
    {
        total = mk1 + mk2 + mk3;
        int per = total / 3.0;
        if (per > 80)
        {
            grade = 'A';
        }
        else
        {
            grade = 'f';
        }
    }
};