class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.length();
        stack<unordered_map<string, int>> st;
        st.push(unordered_map<string, int>());
        int i = 0;
        
        while (i < n) {
            if (formula[i] == '(') {
                st.push(unordered_map<string, int>());
                i++;
            } else if (formula[i] == ')') {
                unordered_map<string, int> curr = st.top();
                st.pop();
                i++;
                string mult;
                while (i < n && isdigit(formula[i])) {
                    mult.push_back(formula[i]);
                    i++;
                }
                int multiint = mult.empty() ? 1 : stoi(mult);
                for (auto &it : curr) {
                    string element = it.first;
                    int count = it.second;
                    curr[element] = count * multiint;
                }
                for (auto &it : curr) {
                    string element = it.first;
                    int count = it.second;
                    st.top()[element] += count;
                }
            } else {
                string currelement;
                currelement.push_back(formula[i]);
                i++;
                while (i < n && isalpha(formula[i]) && islower(formula[i])) {
                    currelement.push_back(formula[i]);
                    i++;
                }
                string currCount;
                while (i < n && isdigit(formula[i])) {
                    currCount.push_back(formula[i]);
                    i++;
                }
                int currCountInt = currCount.empty() ? 1 : stoi(currCount);
                st.top()[currelement] += currCountInt;
            }
        }
        
        map<string, int> Sortedmap(begin(st.top()), end(st.top()));
        string result;
        for (auto &it : Sortedmap) {
            string element = it.first;
            int count = it.second;
            result += element;
            if (count > 1)
                result += to_string(count);
        }
        return result;
    }
};