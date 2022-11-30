class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string ans;
        
        map<int,char>vc;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            vc[indices[i]] = s[i];
        }
        
        for(auto i : vc)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};