class Solution {
public:
    int minimumSum(int num) {
        
        string s,ff,ss;
        
        s = to_string(num);
        
        sort(s.begin(),s.end());
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(i%2 == 0)
            {
                ff.push_back(s[i]);
            }
            
            else{
                ss.push_back(s[i]);
            }
        }
        
        return stoi(ff) + stoi(ss);
    }
};