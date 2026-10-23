class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end())
                 mp[nums1[i]]++;
            else
                mp[nums1[i]]=1; 
        }
        for(int j=0;j<nums2.size();j++){
            if(mp.find(nums2[j])!=mp.end()){
                 mp[nums2[j]]--;

                 if(mp[nums2[j]]==0)
                  mp.erase(nums2[j]);

                  ans.push_back(nums2[j]);

            }
           
        }
         return ans;
    }
};