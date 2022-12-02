class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string s(n,'a');
        
        k-=n;
        
        for(int i = n-1 ; i >= 0 ; i--)
        {
            s[i] += min(k,25);
            k-=min(k,25);
            
            if(k == 0) break;
        }
        
        return s;
    }
};






///  a , a , a
///  a , a , 