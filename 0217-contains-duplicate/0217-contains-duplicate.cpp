class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>arr;
        int n=nums.size();
        for( int i=0;i<n;i++){
            if(arr.find(nums[i])!=arr.end()){
                return true;
            }
            else
            arr.insert(nums[i]);

        }
        return false;

    }
};