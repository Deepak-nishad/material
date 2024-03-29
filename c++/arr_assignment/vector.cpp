#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans << " " << arr[i] << endl;
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    // create vector

    // vector<int> arr;
    // int ans = (sizeof(arr) / sizeof(int));
    // cout << ans << endl;
    // ;

    // cout << "size of array" << arr.size() << endl;
    // cout << arr.capacity() << endl;
    // arr.push_back(5);
    // arr.push_back(6);
    // cout << arr.size() << endl;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // arr.pop_back();
    // cout << arr.size();

    // int n ;
    // cout<<"Enter the value of n " << endl;
    // int n;
    // cin >> n;

    // vector<int> brr(n, -101);
    // cout << "Size of b " << brr.size() << endl;
    // cout << "Capacity of b " << brr.capacity() << endl;
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout << brr[i] << " ";
    // }
    // cout << endl;

    // vector<int> crr;

    // for (int i = 0; i < crr.size(); i++)
    // {
    //     cout << crr[i] << " ";
    // }
    // cout << endl;

    // cout << crr.empty();

    // int n;
    // cout << "Enter the size of array " << endl;
    // cin >> n;

    // vector<int> arr(n);
    // cout << "Enter the elements " << endl;
    // // taking input
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int uniqueElement = findUnique(arr);

    // cout << "Unique Element is  " << uniqueElement << endl;

    // UNION
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5;
    int brr[] = {1, 3, 6, 8};
    int sizeb = 4;

    vector<int> ans;

    // push all element of vector arr
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
    // push all element of vector brr
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    cout << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    // print ans
    cout << endl;
    cout << "Printing ans array " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}