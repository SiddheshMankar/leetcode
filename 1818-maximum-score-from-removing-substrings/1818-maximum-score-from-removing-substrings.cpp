class Solution {
public:

string removestack(string s, string str, int points, int &ans) {
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (!st.empty() && (s[i] == str[1]) && (st.top() == str[0])) {
            st.pop();
            ans += points;
        } else {
            st.push(s[i]);
        }
    }
    string updatedstr = "";
    while (!st.empty()) {
        updatedstr += st.top();
        st.pop();
    }
    reverse(updatedstr.begin(), updatedstr.end());
    return updatedstr;
}

int maximumGain(string s, int x, int y) {
    int ans = 0;
    if (x < y) {
        s = removestack(s, "ba", y, ans);
        s = removestack(s, "ab", x, ans);
    } else {
        s = removestack(s, "ab", x, ans);
        s = removestack(s, "ba", y, ans);
    }
    return ans;
}

};