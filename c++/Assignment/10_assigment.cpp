#include <iostream>
using namespace std;
#include <math.h>
void update(int *a, int *b)
{
    // int sum, sub;
    // sum = *a + *b;
    // cout << sum << endl;
    // sub = abs(*a - *b);

    // cout << sub << endl;
    int temp = *a + *b;
    *b = abs(*a - *b);
    *a = temp;
}
int main()
{

    int a, b;
    cin >> a >> b;
    int *pa = &a, *pb = &b;

    // cout << &a << " " << &b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;

    return 0;
}