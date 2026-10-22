class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;

        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end())
                mp[s[i]]++;
            else
                mp[s[i]]=1;
        }
        for(int j=0;j<s.size();j++){
           if(mp[s[j]]==1)
           return j;

        }

        return -1;
    }
};