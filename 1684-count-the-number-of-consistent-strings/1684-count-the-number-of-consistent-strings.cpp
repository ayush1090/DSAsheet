class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        unordered_map<char,int>vc;
        
        int cnt = 0;
        
        for(int i = 0 ; i < allowed.size() ; i++)
        {
            vc[allowed[i]]++;
        }
        
        for(auto j : words)
        {
            int xx = 0;
            
            for(int i = 0 ; i < j.size() ; i++)
            {
                if(vc[j[i]])
                    xx++;
            }
            
            if(xx == j.size()) cnt++;
        }
        
        return cnt;
    }
};