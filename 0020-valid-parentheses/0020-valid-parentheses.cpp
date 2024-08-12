class Solution {
public:
    bool isValid(string s) {
        stack<char >mp;
        for(auto i:s){
           if(i=='(' || i=='{' || i=='['){
            mp.push(i);
           } 
           else{
            if(mp.empty()){
                return false;
            }
             char top=mp.top();
           if((i==')' && top=='(' ) || 
           (i=='}' && top=='{' ) || 
           (i==']' && top=='[' ) ){
            mp.pop();
           }else{
            return false;
           }
     }
 } 
        return mp.empty();
    }
};
bool isValid(string s) {
    stack<char> mp;
    for(auto i : s) {
        if(i == '(' || i == '{' || i == '[') {
            mp.push(i);
        } else {
            if(mp.empty()) {
                return false;  // No opening bracket for this closing one
            }
            char top = mp.top();
            if((i == ')' && top == '(') || 
               (i == '}' && top == '{') || 
               (i == ']' && top == '[')) {
                mp.pop();
            } else {
                return false;  // Mismatched pair
            }
        }
    } 
    return mp.empty();  // Stack should be empty if all pairs are matched
}