class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>map;
       int n1=s.size();
       int n2=t.size();

        if(n1!=n2)
        {
        return false;
        }

        for(int i=0;i<n1;i++){
            if(map.find(s[i])!=map.end())
                 map[s[i]]=map[s[i]]+1;

            else
                map[s[i]]=1;

        }

        for(int j=0;j<n2;j++){
            if(map.find(t[j])==map.end())
            return false;

            else
                map[t[j]]--;

            if(map[t[j]]==0){
                 map.erase(t[j]);
             }

        }

       
        return true;
    }
};