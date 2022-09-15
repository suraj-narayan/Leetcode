class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int, int> ump;
        if(changed.size()==1 or changed.size()==0)
            
            return {};
        vector<int> ans;
        set<int> s;
        priority_queue<int> pq;
        for(auto i:changed)
        {
            ump[i]++;
            if(i!=0)
            s.insert(i);
        }
        for(auto i:s)
            pq.push(i);
        while(pq.size())
        {
            int t=pq.top();
            pq.pop();
            if(ump[t]==0)
                continue;
            if(t&1)
                return {};
            if(ump[t/2]<ump[t])
                return {};
            ump[t/2]-=ump[t];
            for(int i=0;i<ump[t];i++)
            ans.push_back(t/2);
        }
        if(ump[0]&1)
            return {};
        
        else
            for(int i=0;i<ump[0]/2;i++)
                ans.push_back(0);
            reverse(ans.begin(), ans.end());
        return ans;
    }
};