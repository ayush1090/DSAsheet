class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
        unordered_map<string,int>vc;
        
        for(auto x : paths)
        {
            vc[x[0]]++; vc[x[1]]+=0;
        }
        
        for(auto [x,y] : vc)
        {
            if(y == 0)
                return x;
        }
        
        return "";
    }
};