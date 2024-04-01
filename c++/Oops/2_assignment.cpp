#include <iostream>
using namespace std;

class function_overload
{
public:
    void display(char arr[])
    {
        cout << arr << endl;
    }
    void display(char arr[], char arr2[])
    {
        cout << arr << arr2 << endl;
    }
};

int main()
{

    // assignment 2
    char s[10] = "Prudent";
    char s1[10] = "Academy";
    function_overload fc;

    fc.display(s);
    fc.display(s, s1);
    return 0;
}
