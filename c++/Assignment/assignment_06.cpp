#include <iostream>
using namespace std;

float power(float, float);

int main()
{
    int i;
    float res;
    float n;
    float m;
    cout << "Enter value of n and m " << endl;
    cin >> n >> m;
    res = power(n, m);
    cout << res << " " << endl;

    return 0;
}

float power(float n, float m) // 2^5 ==>  2*2*2*2*2
{
    int i;
    float p = 1.0;

    for (i = 1; i <= m; i++)
        p = p * n;

    return p;
}