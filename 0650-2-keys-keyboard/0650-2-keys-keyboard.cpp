class Solution {
    map<pair<int,int>,int> store;
    int getSteps(int n,int cur,int curL){
        if(curL == n){
            return 0;
        }
        if(curL > n) return 1000;
        
        if(store.find({cur,curL}) != store.end()) {
            // cout << "Cached" << endl;
            return store[{cur,curL}];
        }
        //copy+paste
        int cp = 2 + getSteps(n,curL,2*curL); 
        //paste
        int p = 1 + getSteps(n,cur,curL+cur);

        return store[{cur,curL}]=min(cp,p); 
    }
public:
    int minSteps(int n) {
        if(n == 1) return 0;
        store.clear();
        return 1+getSteps(n,1,1);
    }
};