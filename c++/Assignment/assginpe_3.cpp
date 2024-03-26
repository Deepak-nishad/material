#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "\n Enter a number :";
    cin >> num; // num = 16
    for (i = 1; i * i * i <= num; i++)
    {
        cout << i << " " << i * i << endl;
        if ((i * i * i) == num)
        {
            cout << "\nYES";
            break;
        }
    }
    if ((i * i * i) != num)
        cout << "\nNO";

    return 0;
}
