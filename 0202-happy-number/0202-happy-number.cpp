class Solution {
public:
    bool isHappy(int n) {
        int num=n;
        for(int i=0; i<50; i++){
            int sum=0;
            while(num!=0){
                sum+=(num%10)*(num%10);
                num=num/10;
            }
            if (sum==1)
             return true;
            num=sum;
        }
        return false;
        
    }
};