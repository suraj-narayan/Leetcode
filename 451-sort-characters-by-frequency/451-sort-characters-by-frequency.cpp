class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> ump;
        for(auto i:s)
            ump[i]++;
        priority_queue<pair<int, char>> pq;
        
        for( auto i: ump)
        {
            pq.push({i.second, i.first});
            
        }
        
        string ans="";
        
        while(!pq.empty())
        {
            for(int i=0;i<pq.top().first;i++)
                ans+=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};