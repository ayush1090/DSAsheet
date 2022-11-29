class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        string ans;
        
        for(auto i : words)
        {
            string s = i;
            
            reverse(s.begin(),s.end());
            
            if(s == i)
            {
                ans = i; break;
            }
        }
        
        return ans;
    }
};