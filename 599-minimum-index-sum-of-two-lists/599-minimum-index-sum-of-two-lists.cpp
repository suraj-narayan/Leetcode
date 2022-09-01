class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> ump;
        for(int i=0;i<list1.size();i++)
            ump[list1[i]]+=i;
        for(int i=0;i<list2.size();i++)
        {
            if(ump.find(list2[i])!=ump.end())
                ump[list2[i]]+=(3000+i);
        }
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
        for(auto i:ump)
        {
            if(i.second>=3000)
            {
                pq.push({i.second, i.first});
            }
        }
        int a=pq.top().first;
        vector<string> ans;
        while(pq.size() )
        {
            if(pq.top().first==a)
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
            else
                break;
            
        }
        
        return ans;
        
        
    }
};