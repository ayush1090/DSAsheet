class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       unordered_map<string, vector<string>>vc;
        
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string s = strs[i];
            
            sort(strs[i].begin(),strs[i].end());
            
            vc[strs[i]].push_back(s);
        }
        
        vector<vector<string>>ans;
        vector<string>temp;
        
        for(auto i : vc)
        {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};