class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>mp;
        int n1=s.size();
        int n2=t.size();

        if(n1!=n2)
            return false;
    

    for(int i=0;i<n1;i++){
        if(mp.find(s[i])!=mp.end()){
            mp[s[i]]++;
        }
        else
        mp[s[i]]=1;
    }

    for(int j=0;j<n2;j++){
        if(mp.find(t[j])==mp.end()){
            return false;
        }
        else
        mp[t[j]]--;

        if(mp[t[j]]==0)
        mp.erase(t[j]);

    }
        return true;
    }
};