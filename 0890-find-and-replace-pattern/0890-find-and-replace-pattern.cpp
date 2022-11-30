class Solution {
public:
    
    string cnn(string s)
    {        
        unordered_map<char,int>vc;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(!vc[s[i]])
                vc[s[i]] = vc.size();
        }
        
        
        for (int i = 0; i < s.length(); ++i) 
            s[i] = vc[s[i]];
        
        return s;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string>ans;
        
        for(int i = 0 ; i < words.size() ; i++)
        {
            if(cnn(words[i]) == cnn(pattern))
            {
                ans.push_back(words[i]);
            }
        }
        
        return ans;
    }
};