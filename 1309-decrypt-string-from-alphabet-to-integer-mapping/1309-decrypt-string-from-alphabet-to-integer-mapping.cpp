class Solution {
public:
    string freqAlphabets(string s) {
        
        int i  = 0, n = s.size();
        
        string ans;
        
        while(i<n )
        {
            string temp;
            
           if(i + 2 < n && s[i + 2] == '#') {
                int ss = (s[i]-'0')*10 + (s[i+1]-'0');
                ans += char(ss+'a'-1);
                i += 3;
            }
            
            else{
                ans.push_back(s[i]-'0'+96);
                i++;
            }
        }
        
        return ans;
    }
};