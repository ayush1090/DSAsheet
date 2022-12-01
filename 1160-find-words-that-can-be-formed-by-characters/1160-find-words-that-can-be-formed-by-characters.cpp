class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int cnt = 0;
        
        unordered_map<char,int>cv;
        
        for(auto i : chars)
        {
            cv[i]++;
        }
        
        for(auto j : words)
        {
            unordered_map<char,int>vc = cv;
            int xx = 0;
            
            for(int i = 0; i < j.size() ; i++)
            {
                if(vc[j[i]])
                {
                    xx++;
                    vc[j[i]]--;
                }
            }
            
            if(xx == j.size()) 
                cnt+=xx;
        }
        
        return cnt;
    }
};