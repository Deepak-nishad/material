#include <iostream>
using namespace std;
int main()
{
    char ch[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    if (n < 1)
    {
        cout << "n must be greate the one " << endl;
    }
    else if (n > 9)
    {
        cout << "Greate then 9" << endl;
    }
    else
    {

        cout << ch[n - 1];
    }

    return 0;
}