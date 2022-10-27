class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        vector<pair<int,int>>v1,v2;
        
        int n  = img1.size();
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(img1[i][j] == 1)
                    v1.push_back({i,j});
            }
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(img2[i][j] == 1)
                    v2.push_back({i,j});
            }
        }
        
        map<pair<int,int>,int>vc;
        
        int ans = 0;
        
        for(auto [i1,j1] : v1)
        {
            for(auto [i2,j2] : v2)
            {
                vc[{i1-i2,j1-j2}]++;
                
                ans = max(ans,vc[{i1-i2,j1-j2}]);
            }
        }
        
        return ans;
    }
};