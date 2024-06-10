#include <iostream>
#include <conio.h>
using namespace std;

int *sumodd(int);
// int *sumeven(int n);
int main()
{
    int limit, op;
    cin >> limit;
    cin >> op;
    int *ptr;
    ptr = sumodd(limit);
}

int *sumodd(int num)
{
    int i;
    int osum = 0;
    for (int i = 1; i <= num; i++)

        osum = osum + i;
    return &osum;
}
