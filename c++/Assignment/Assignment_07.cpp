#include <iostream>
using namespace std;

int max_of_four(int, int, int, int);
int main()
{

    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int res = max_of_four(a, b, c, d);
    cout << "Largest of four numbers " << res << endl;
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {

        return a;
    }
    else if (b > c && b > d)
    {

        return b;
    }
    else if (c > d)
    {
        return c;
    }
    else
        return d;
}