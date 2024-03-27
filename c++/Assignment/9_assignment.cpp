#include <iostream>
using namespace std;

int main()
{
    // int testcase;
    for (int i = 1; i <= 2; i++)
    {
        int num, sum = 0;
        cin >> num;
        for (int i = num; i < i + 4; i++)
        {
            cout << "Loop k ander aa gay" << endl;
            while (num != 0)
            {
                cout << "while k ander aa gay" << endl;

                sum = sum + num % 10;
                num = num / 10;
            }
            if (sum % 4 == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}
