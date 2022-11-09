class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    stack<pair<int,int>>st;
    
    int next(int price) {
        
        int cnt = 1;
        
        while(st.size() && st.top().first <= price)
        {
            cnt+=st.top().second;
            st.pop();
        }
        
        st.push({price,cnt});
        
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */