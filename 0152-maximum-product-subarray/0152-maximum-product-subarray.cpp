class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int productt=1;
      int maxi=INT_MIN;
      for(int i=0;i<nums.size();i++){
          productt=productt*nums[i];
          maxi=max(productt,maxi);
          if(productt==0){
            productt=1;
          }
        
          
      }
      productt=1;
      for(int i=nums.size()-1;i>0;i--)
      {
           productt= productt*nums[i];
          maxi=max( productt,maxi);
          if( productt==0){
               productt=1;
          }
      }
    return maxi;
    }
};