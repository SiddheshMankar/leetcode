//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>sor;
        sor = arr;
        sort(sor.begin(),sor.end());
        vector<int>ans;
        for(int i=0;i<n;i++){
            auto it = lower_bound(sor.begin(),sor.end(),arr[i]);
            int idx = it-sor.begin();
            sor.erase(it);
            ans.push_back(idx);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends