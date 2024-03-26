#include <iostream>
using namespace std;
#include <limits.h>
int main()
{
    int num, rev_num = 0, rem;
    cout << "\n Enter a number : ";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        cout << "rem " << rem << endl;

        if ((rev_num > (INT_MAX / 10)) || (rev_num < (INT_MIN / 10)))
        {
            return 0;
        }

        rev_num = rev_num * 10 + rem;
        cout << "Reverse " << rev_num << endl;

        num = num / 10;
        cout << num << endl;
    }

    cout << "\n Reverse number =============== = " << rev_num;

    return 0;
}
