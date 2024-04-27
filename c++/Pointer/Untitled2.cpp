#include <iostream>
using namespace std;

class Array
{
    int array[10];

public:
    Array()
    {
    }
    Array(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            this->array[i] = arr[i];
        }
    }

    int &operator[](int index)
    {
        cout << "in the []" << index << endl;
        if (index < 0 || index > 9)
        {
            cout << "Array index invalid " << index;
            exit(1);
        }
        return array[index];
    }
    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << this->array[i] << " ";
        }
    }
};

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Array arr(a, 10);
    // arr.display();
    cout << "call array [] " << endl;
    a[5] = 80;
    cout << a[5] << endl;
    cout << arr[4] << " ";
    arr[2] = 35;
    cout<<arr[2]<<" ";
}
