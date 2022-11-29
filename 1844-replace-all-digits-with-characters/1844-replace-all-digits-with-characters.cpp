class Solution {
public:
    string replaceDigits(string s) {
        
        string ans;
        
        for(int i = 0 ; i  < s.size() ; i++)
        {
            if(i%2)
            {
                int x = s[i]-'0';
                ans.push_back(s[i-1]+x);
            }
            
            else{
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
};