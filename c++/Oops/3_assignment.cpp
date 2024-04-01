#include <iostream>
using namespace std;

class BankAcc
{
    string name;
    int Acc_no;
    string type;
    int balance;

public:
    BankAcc()
    {
        balance = 0;
        Acc_no = 0;
        type = "";
        name = "";
    }
    void deposit(int amount)
    {
        this->balance = this->balance + amount;
    }
    BankAcc(int acountno, int bal, string nam, string typ)
    {
        this->Acc_no = acountno;
        this->balance = bal;
        this->name = nam;
        this->type = typ;
    }
    void display()
    {
        cout << this->balance << endl;
        cout << this->name << endl;
    }
    void withdraw(int am)
    {
        if (this->balance > am)
            this->balance = this->balance - am;
    }
    void init(int acountno, int bal, string nam, string typ)
    {
        this->Acc_no = acountno;
        this->balance = bal;
        this->name = nam;
        this->type = typ;
    }
    ~BankAcc()
    {
        cout << "destructor is called";
    }
};

int main()
{

    BankAcc ba;
    BankAcc baa(34931624, 100000, "Deepak", "saving");
    baa.display();
}
