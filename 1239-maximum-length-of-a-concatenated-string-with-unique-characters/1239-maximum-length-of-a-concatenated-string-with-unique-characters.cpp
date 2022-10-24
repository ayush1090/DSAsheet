class Solution {
public:
    
    int maxi(string s) 
    { 
        int count[26] = {0};
        
        for(int i = 0; i < s.size(); i++)
            if(count[s[i] - 'a']++ > 0) 
                return 0;
        
        return s.size();
    }
    
    void solve(vector<string>& arr, int i , string curr, int &ans)
    {
        if(i == arr.size())
        {
            if(maxi(curr) > ans)
            {
                ans = curr.size();
            }
            
            return;
        }
        
        solve(arr,i+1,curr,ans);
        solve(arr,i+1,curr+arr[i],ans);
    }
    
    int maxLength(vector<string>& arr) {
        
        int ans = 0;
        solve(arr, 0, "", ans);
        return ans;
        
    }
};