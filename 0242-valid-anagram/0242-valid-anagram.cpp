class Solution {
public:
    bool isAnagram(string s, string t) {
            unordered_map<char,int>mp;
        int n1=s.size();
        int n2=t.size();

        if(n1!=n2){
            return false;
        }

        for(int i=0;i<n1;i++){
            if(mp.find(t[i])!=mp.end())
                 mp[t[i]]++;
            else
                mp[t[i]]=1;
        
        }

        for(int j=0; j<t.size();j++){
            if(mp.find(s[j])==mp.end())
            return false;

            mp[s[j]]--;

            if(mp[s[j]]==0){
                mp.erase(s[j]);
            }


        }
        return true;
        
    }
};