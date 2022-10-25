class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        int sum = 0;
        
        for(int i = s.size()-1 ; i >= 0 ; i--)
        {
            sum += shifts[i];
            
            sum%=26;
            
            int xx = s[i]-'a';
            
            xx = (xx+sum)%26;
            
            s[i]=xx+'a';
        }
        
        return s;
    }
};