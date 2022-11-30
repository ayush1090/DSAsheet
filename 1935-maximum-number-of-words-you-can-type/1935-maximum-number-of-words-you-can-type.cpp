class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        int cnt = 0;
        
        unordered_map<char,int>vc;
        
        for(int i = 0 ; i < brokenLetters.size() ; i++)
        {
            vc[brokenLetters[i]]++;
        }
        
        for(int i = 0 ; i < text.size() ; i++)
        {
            int x = 0;
            
            while (i < text.length() && text[i] != ' ')
            {
                if(vc[text[i]])
                    x++;
                i++;
            }
            
            if(x == 0)
                cnt++;
        }
        
        return cnt;
    }
};