class Solution {
public:
    int findMin(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i:nums)
            pq.push(i);
        return pq.top();
    }
};