class Solution {
public:
    string fractionAddition(string exp) {
        int num=0;
        int demo=1;
        int i=0;
        int n=exp.size();
        while(i<n){
            int currNum=0;
             int currDen=0;
             bool isNeg=(exp[i]=='-');
             if(exp[i]=='+' || exp[i]=='-' ){
                i++;
             }
        //numerator
            while(i<n && isdigit(exp[i])){
                int val=exp[i]-'0';
                currNum=(currNum*10)+val;
                i++;
            }
            i++;
            if(isNeg==true){
                currNum *=-1;

            }
            while(i<n && isdigit(exp[i])){
              int val=  exp[i]-'0';
              currDen=(currDen*10)+val;
              i++;
            }
            num=num*currDen+ currNum*demo;
            demo=demo*currDen;
        }
        int GCD=abs(__gcd(num,demo));
        num/=GCD;
        demo/=GCD;
        return to_string(num)+ "/" + to_string(demo);
    }
};