#include <iostream>
using namespace std;
// void take_input(int arr[][3])
void take_input(int (*ptr)[3], int arr2[][3])
{
    cout << "Enter value of first matrix :- ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter number : - ";
            cin >> ptr[i][j];
        }
    }
    cout << "Enter value of 2nd matrix :- ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter number : - ";
            cin >> arr2[i][j];
        }
    }
}

// void display_arr(int arr[][3])
void display_arr(int (*ptr)[3], int arr2[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

void mul(int arr[][3], int arr2[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << (arr2[i][j] * arr2[i][j]) << " ";
        }
        cout << endl;
    }
}

int digonal_sum(int arr[][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)

                sum = sum + arr[i][j];
        }
    }
    return sum;
}
int main()
{
    int arr[3][3];
    int arr2[3][3];
    take_input(arr, arr2);
    // display_arr(arr, arr2);
    // mul(arr, arr2);
    int dio_sum = digonal_sum(arr);
    cout << dio_sum << endl;
}