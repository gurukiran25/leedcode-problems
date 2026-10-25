class Solution {
public:
    bool isHappy(int n) {
        for(int i=0;i<n;i++){
            int sum=0;
            while(n!=0){
                sum=sum+(n%10)*(n%10);
                n=n/10;
            }
            if(sum==1)
            return true;
            n=sum;
        }
        return false;
    }
};