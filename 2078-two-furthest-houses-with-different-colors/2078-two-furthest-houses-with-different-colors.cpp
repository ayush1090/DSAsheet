class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int maxi = 0;
        
        for(int i = 0 ; i < colors.size()-1 ; i++)
        {
            for(int j = i+1 ; j < colors.size() ; j++)
            {
                int xx = 0;
                
                if(colors[i]!=colors[j])
                {
                    xx = j-i;
                }
                
                maxi = max(maxi,xx);
            }
        }
        
        return maxi;
    }
};