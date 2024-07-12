class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long answer=0;
        if(x<0){
            return false;
        }
        while(x>0){
            int digit=x%10;
            answer=answer*10+digit;
            x=x/10;
        }
        if(temp==answer){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
};