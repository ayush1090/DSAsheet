class Solution {
public:
    string countAndSay(int n) {
        
        string ans = "1";
        
        for(int i = 2 ; i <= n ; i++)
        {
            string temp = ans;
            
            int j = 0;
            
            ans = "";
            
            int cnt = 1;
            
            while(j < temp.size())
            {
        
                if(temp[j] == temp[j+1])
                {
                    cnt++;
                }
                
                else
                {
                    ans += to_string(cnt) + temp[j];
                    cnt = 1;
                }
                
                j++;
            }
        }
        
        return ans;
    }
};