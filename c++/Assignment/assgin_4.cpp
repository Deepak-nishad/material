#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "\n Enter a number :";
    cin >> num; // num = 16
    for (i = 1; i * i <= num; i++)
    {

        if ((i * i) == num)
        {
            cout << "\nYES";
            break;
        }
    }
    cout << i << endl;
    if ((i * i) != num)
        cout << "\nNO";
}
