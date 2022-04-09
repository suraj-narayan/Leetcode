class Solution {
public:
  
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        
        for(auto i:nums)
            ump[i]++;
        for(auto i:ump)
        {
            pq.push(make_pair(i.second, i.first));
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<int> arr;
        while(pq.size())
        {
            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
    }
};