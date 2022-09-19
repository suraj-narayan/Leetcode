class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        int n=nums.size();
        
        priority_queue<int> pq;
        vector<int> ans;
        
        for(int i=0;i<k;i++)
        {
            ump[nums[i]]++;
            pq.push(nums[i]);
        }
        
        
        ans.push_back(pq.top());
        
        for(int i=k;i<n;i++)
        {
            int temp=nums[i-k];
            ump[nums[i]]++;
            pq.push(nums[i]);
            if(pq.top()!=temp)
            {
                ump[temp]--;
                ans.push_back(pq.top());
                continue;
            }
            
            ump[temp]--;
            pq.pop();
            
            while(pq.size() and ump[pq.top()]==0)
            {
                pq.pop();
            }
            ans.push_back(pq.top());
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        }
        
        return ans;
        
        
        
        
        
        
    }
};