//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
      void fun(int i,int j,string temp,vector<vector<int>> &mat,vector<string> &ans){
        if(i<0 || j<0 || i>=mat.size() || j>=mat.size() || mat[i][j]==0)
            return;
        
        if(i==mat.size()-1 && j==mat.size()-1){
            ans.push_back(temp);
            return;
            
        }
        
        mat[i][j]=0;
        
        fun(i-1,j,temp+"U",mat,ans);
        fun(i+1,j,temp+"D",mat,ans);
        fun(i,j-1,temp+"L",mat,ans);
        fun(i,j+1,temp+"R",mat,ans);
        
        mat[i][j]=1;
        return;
        
    }
    
    
    
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        vector<string> ans;
        if(mat[0][0]==0 || mat[mat.size()-1][mat.size()-1]==0)
            return ans;
        fun(0,0,"",mat,ans);
        return ans;
        
    }


};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends