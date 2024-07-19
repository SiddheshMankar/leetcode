class Solution {
public:
    bool check(vector<int> &piles,int mid,int h){
        int ans=0;
        for(int &x:piles){
            ans+=x/mid;
            if(x%mid!=0){
                ans++;
            }
        }
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=*max_element(piles.begin(),piles.end());
        while(start<end){
            int mid=(start+end)/2;
            if(check(piles,mid,h)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
};