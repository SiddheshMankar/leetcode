//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
   int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
        int mini=0;
        int row = arr.size();
        int col = arr[0].size();
        int ans=-1;
        for(int i=0;i<row;i++){
            int cnt=0;
            for(int j=0;j<col;j++){
                if(arr[i][j]==1)
                    cnt++;
            }
            if(mini<cnt){
                mini = cnt;
                ans = i;
            }
            cnt=0;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends