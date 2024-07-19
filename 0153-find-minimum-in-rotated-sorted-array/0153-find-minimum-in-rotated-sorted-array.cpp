class Solution {
public:
    int findMin(vector<int>& nums) {
      int start=0;
      int end=nums.size()-1;
      int minn=INT_MAX;
      while(start<=end){
        int firstmin=min(nums[start],nums[end]);
        minn=min(minn,firstmin);
        start++;
        end--;
          }
          return minn;
    }

};