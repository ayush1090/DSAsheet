class Solution {
public:
    int maxDepth(string s) {
        
        int cnt = 0,ans = 0;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '(')
            {
                ans = max(ans,++cnt);
            }
            
            else if(s[i] == ')')
                cnt--;
        }
        
        return ans;
    }
};