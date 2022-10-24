class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        unordered_map<int,int>vc;
        
        int ans = INT_MAX;
        
        for(int i = 0 ; i < cards.size() ; i++)
        {
            if(vc.find(cards[i]) != vc.end())
            {
                ans = min(ans,i - vc[cards[i]] + 1);
            }
            
            vc[cards[i]] = i;
        }
        
        if(ans == INT_MAX)return -1; 
        
        return ans;
    }
};