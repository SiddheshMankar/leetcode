//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int ans1=0;
        int ans2=0;
           vector<int> count(n + 1, 0);

    // Increment counts for each element in the array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Find the duplicate and missing numbers
    for (int i = 1; i <= n; i++) {
        if (count[i] == 2) {
            ans1 = i; // The duplicate number
        } else if (count[i] == 0) {
            ans2 = i; // The missing number
        }
    }

    // Return the result as a vector
    return {ans1, ans2};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends