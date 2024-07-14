class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        if(nums.size()==1 && target==nums[0]){
            return 0;
        }
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target)
            return mid;
            else if (nums[mid]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return -1;
    }
};