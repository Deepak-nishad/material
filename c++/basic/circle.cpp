#include <iostream>
using namespace std;
float circle(int radius)
{
    // float pi = 3.14;
    float res = 3.14 * radius * radius;
    return res;
}
int main()
{
    float radius;
    cin >> radius;
    float output = circle(radius);
    cout << output << endl;
}