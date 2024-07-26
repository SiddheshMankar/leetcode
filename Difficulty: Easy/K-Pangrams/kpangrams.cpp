//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
            set<char>st;
        int count = 0;
        for(int i=0;i<str.length();i++)
        {
             if(str[i]!=' ' and str[i]!=',' and str[i]!='.'){
             count++;
             st.insert(str[i]);
             }
        }
        if(count < 26 ) return false;
        // cout<<st.size()<<endl;
        if(st.size()==26)return true;
        if(26 - st.size() <= k) return true;
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends