class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())
            return 0;
        priority_queue<int> pq;
        for(auto i:nums)
            pq.push(i);
        int ans=1;
        int prev, count=1;
        
        prev=pq.top();
        pq.pop();
        
        while(pq.size())
        {
            int temp=pq.top();
            pq.pop();
            if(prev==temp)
                continue;
            if(temp==prev-1)
            {
                count++;
                if(count>ans)
                    ans=count;
            }
            else
                count=1;
            prev=temp;
        }
        return ans;
        
        
        
    }
};