#include <iostream>
using namespace std;
long long int factorial(long long int num)
{
    long long int res = 1;
    for (int i = 1; i <= num; i++)
    {
        res = res * i;
    }
    return res;
}
int main()
{
    long long int num;
    cin >> num;
    long long int output = factorial(num);
    cout << output << endl;
}