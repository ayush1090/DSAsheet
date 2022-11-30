class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        
        unordered_map<int,int>vc; vector<int>v;
        
        for(int i = 0 ; i < arr.size() ; i++)
        {
            vc[arr[i]]++;
        }
        
        for(auto i : vc)
        {
            v.push_back(i.second);
        }
        
        sort(v.begin(),v.end());
        
        for(int i = 0 ; i < v.size()-1 ; i++)
        {
            if(v[i+1] == v[i])
            {
                return false;
            }
        }
        
        return true;
    }
};