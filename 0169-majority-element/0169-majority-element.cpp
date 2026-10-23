class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int size=nums.size()/2;

        for(int i=0;i<nums.size();i++){
            if(map.find(nums[i])!=map.end())
                 map[nums[i]]=map[nums[i]]+1;
            else
                map[nums[i]]=1;

        }
        for(int j=0;j<nums.size();j++){
            if(size<map[nums[j]])
            return nums[j];
        }
        return -1;
    }
};