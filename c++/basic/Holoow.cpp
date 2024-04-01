#include <iostream>
using namespace std;
int main()
{

    for (int row = 0; row < 6; row++)
    {
        if (row == 0 || row == 5)
        {
            for (int i = 0; i < 5; i++)
            {
                cout << "* ";
            }
            // cout << endl;
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < 3; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    // int rowCount, colCount;
    // cin >> rowCount;
    // cin >> colCount;

    // // //Hollow Rectangle
    // for (int row = 0; row < rowCount; row = row + 1)
    // {
    //     // first row or last row -> print 5 *
    //     if (row == 0 || row == rowCount - 1)
    //     {
    //         for (int col = 0; col < colCount; col++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         // remainging middle rows
    //         // first star
    //         cout << "* ";
    //         // spaces
    //         for (int i = 0; i < colCount - 2; i = i + 1)
    //         {
    //             cout << "  ";
    //         }
    //         // last star
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}