class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>vc;
        
        for(auto i : text)
            vc[i]++;
        
        return min(vc['b'],min(vc['a'],min(vc['l']/2,min(vc['o']/2,vc['n']))));
    }
};