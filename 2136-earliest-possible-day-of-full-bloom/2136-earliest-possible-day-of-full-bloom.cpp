class Solution {
public:
    
    static bool comp(pair<int,int>p1,pair<int,int>p2)
    {
        return p1.second > p2.second;
    }
    
    int earliestFullBloom(vector<int>& plant, vector<int>& grow) {
        
        vector<pair<int,int>>v;
        
        int n = plant.size();
        
        for(int i = 0 ; i < n ; i++)
        {
            v.push_back({plant[i],grow[i]});
        }
        
        sort(v.begin(), v.end(),comp);
        
        int ss = 0,ans = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            ss+=v[i].first;
            
            ans = max(ans,ss+v[i].second);
        }
        
        return ans;
    }
};