class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int sum = 0;
        
        unordered_map<int,int>vc;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum+=nums[i]; sum%=k;
            
            if(sum == 0 && i)
                return true;
            
            if(vc.find(sum) != vc.end())
            {
                if(i - vc[sum] > 1) 
                    return true;
            }
            
            else
                vc[sum] = i;
        }
        
        return false;
    }
};