class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arr;
        for(int x:nums){
            if (arr.find(x)!=arr.end())
                return true;
            else
                arr.insert(x);
        }
        return false;
    }
};