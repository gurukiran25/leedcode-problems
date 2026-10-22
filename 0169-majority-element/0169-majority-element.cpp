class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int>mp;
         int size=nums.size()/2;

         for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end())
                mp[nums[i]]=mp[nums[i]]+1;
            else
                mp[nums[i]]=1;
         }

        for(int j=0;j<nums.size();j++){
            if(size<mp[nums[j]])
            return nums[j];
        }
     return -1;
    }
};