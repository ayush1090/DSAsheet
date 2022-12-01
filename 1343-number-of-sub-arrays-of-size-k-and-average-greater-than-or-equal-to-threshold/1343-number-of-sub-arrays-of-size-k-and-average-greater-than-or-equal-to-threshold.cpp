class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int ans = 0,cnt = 0;
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
           if(i<k)
               cnt+=arr[i];
            
           if(i>=k)
            {  
               if(cnt/k >= threshold)
                   ans++;
               cnt -= arr[i-k];
               cnt+=arr[i];
            }
        }
        
        if(cnt/k >= threshold)
                 ans++;
        
        return ans;
    }
};