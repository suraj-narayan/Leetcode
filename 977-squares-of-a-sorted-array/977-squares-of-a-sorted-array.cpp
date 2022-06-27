class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(auto i:nums)
            pq.push(abs(i));
        vector<int> ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top()*pq.top());
            pq.pop();
        }
        return ans;
    }
};