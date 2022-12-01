class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int ans = 0, cnt = 0;
        
        unordered_map<char,int>vc;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            
            if(i>=3 && --vc[s[i-3]] == 0)
            {
                vc.erase(s[i-3]); 
            }
            
            vc[s[i]]++;
            
            if(vc.size() == 3)
                cnt++;
        }
        
        return cnt;
    }
};