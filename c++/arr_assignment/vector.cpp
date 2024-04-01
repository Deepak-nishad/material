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
    // int arr[] = {1, 3, 5, 7, 9};
    // int sizea = 5;
    // int brr[] = {1, 3, 6, 8};
    // int sizeb = 4;

    // vector<int> ans;

    // // push all element of vector arr
    // for (int i = 0; i < sizea; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // cout << endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // cout << endl;
    // // push all element of vector brr
    // for (int i = 0; i < sizeb; i++)
    // {
    //     ans.push_back(brr[i]);
    // }
    // cout << endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // // print ans
    // cout << endl;
    // cout << "Printing ans array " << endl;
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    vector<int> arr{1, 2, 3, 3, 4, 6, 8};
    vector<int> brr{3, 3, 4, 10};

    vector<int> ans;

    // outer loop on arr vector
    // for (int i = 0; i < arr.size(); i++)
    // {

    //     int element = arr[i];
    //     // for every element, run loop on brr
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (element == brr[j])
    //         {
    //             cout << element << "value of i = " << i << endl;
    //             // mark
    //             brr[j] = -1;
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // for (auto value : ans)
    // {
    //     cout << value << " ";
    // }

    // cout << endl;

    // vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    // int start = 0;
    // int end = arr.size() - 1;
    // int i = 0;

    // while (i != end)
    // {
    //     cout << "for i=" << i << " start=" << start << " end=" << end << endl;
    //     if (arr[i] == 0)
    //     {
    //         cout << "found zero" << endl;
    //         cout << "before swap ";
    //         printArray(arr);

    //         swap(arr[start], arr[i]);
    //         cout << "after  swap ";
    //         printArray(arr);
    //         start++;
    //         i++;
    //         cout << "now i=" << i << " start=" << start << " end=" << end << endl;
    //     }
    //     else
    //     {
    //         cout << "found One" << endl;
    //         cout << "before swap ";
    //         // printArray(arr);
    //         swap(arr[end], arr[i]);
    //         cout << "after  swap ";
    //         printArray(arr);
    //         end--;
    //         cout << "now i=" << i << " start=" << start << " end=" << end << endl;
    //     }
    // }

    // // print
    // for (auto val : arr)
    // {
    //     cout << val << " ";
    // }

    // return 0;
}
