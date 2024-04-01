#include <iostream>
using namespace std;

int main()
{

    // Printing Solid rectangle
    // outer loop - row obeserve
    //  for(int row=0; row<3; row=row+1) {
    //   //inner loop - col observe
    //   for(int col=0; col<5; col=col+1) {
    //       cout << "* ";
    //   }
    //   cout << endl;
    //  }

    // for (int col = 0; col < 5; col = col + 1)
    // {

    //     for (int row = 0; row < 3; row = row + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;
    // Solid Rectangle
    // outer looop
    // row += 1 is same as row = row +1
    // for(int row=0;row<n; row += 1) {
    //  ///inner
    //  //col += 1 is same as col = col + 1
    //  for(int col=0; col<n; col+=1) {
    //      cout << "* ";
    //  }
    //  cout << endl;
    // }

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

    // number of rows
    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row = row + 1)
    // {
    //     for (int col = 0; col < row + 1; col = col + 1)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // number of rows
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    // number of rows = n
    // int n;
    // cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    // number of rows -> n

    // int n;
    // cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << col + 1;
        }
        cout << endl;
    }
}
