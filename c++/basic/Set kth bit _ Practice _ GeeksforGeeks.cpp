#include <iostream>
using namespace std;
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1 << K;
        int ans = mask | N;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;

        Solution ob;
        int ans = ob.setKthBit(N, K);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends