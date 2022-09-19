class AllOne {
public:
    
    unordered_map<string, int> ump;
    priority_queue<pair<int, string>> pq;
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq2;
    
    
    AllOne() {
        
        
    }
    
    void inc(string key) {
        ump[key]++;
        pq.push({ump[key], key});
        pq2.push({ump[key], key});
        
        
    }
    
    void dec(string key) {
        ump[key]--;
        pq.push({ump[key], key});
        pq2.push({ump[key], key});
    }
    
    string getMaxKey() {
        while(pq.size()) {
            if(ump[pq.top().second] and pq.top().first==ump[pq.top().second])
            {
                return pq.top().second;
                
            }
            else
                pq.pop();
        }
        return "";
        
        
        
    }
    
    string getMinKey() {
        
        while(pq2.size()) {
            if(ump[pq2.top().second] and pq2.top().first==ump[pq2.top().second]) {
                return pq2.top().second;
            }
            else
                 pq2.pop();
        }
        return "";
        
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */