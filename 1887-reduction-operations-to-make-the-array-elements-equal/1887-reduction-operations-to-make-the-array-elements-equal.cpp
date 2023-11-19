class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        unordered_map<int, int> ump;
        int n= nums.size();
        for(int i = 0;i<n;i++ )
            ump[nums[i]]++;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i:ump) {
            pq.push(i.first);
        }
        pq.pop();
        int count = 1;
        int ans = 0;
        while(pq.size())
        {
            int a = ump[pq.top()];
            pq.pop();
            ans+= count*a;
            count++;
        }
        return ans;
        
    }
};