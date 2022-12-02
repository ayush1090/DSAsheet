class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        vector<int>v1(26,0),v2(26,0),m1(26,0),m2(26,0);
        
        for(auto i : word1)
        {
            v1[i-'a']=1;
            v2[i-'a']++;
        }
        
        for(auto i : word2)
        {
            m1[i-'a']=1;
            m2[i-'a']++;
        }
        
        sort(v2.begin(),v2.end());
         sort(m2.begin(),m2.end());
        
        return (v1 == m1) && (v2 == m2);
    }
};