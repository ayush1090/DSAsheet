class Solution {
public:
    string reverseWords(string s) {
        
        string ans;
        
        stack<string>st;
        
        for(int i = 0 ; i < s.size() ; i++)
        {
            string temp;
            
            if(s[i] == ' ') 
                continue;
            
            while(i<s.size() && s[i]!=' ')
            {
                temp.push_back(s[i]); i++;
            }
            
            st.push(temp);
        }
        
        while(st.size())
        {
            ans+=st.top(); st.pop();
            
            if(st.size())
                ans+=' ';
        }
        
        return ans;
    }
};