class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int>mp1(1001);
        vector<int>mp2(1001);
        for(auto &v:target){
            mp1[v]++;
        }
        
        for(auto &v:arr){
            mp2[v]++;
        }
    return mp1==mp2;
    }
};