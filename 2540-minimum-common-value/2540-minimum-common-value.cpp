class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ump;
        for(auto i: nums1) {
            ump[i]++;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto i:nums2) {
            pq.push(i);
        }
        while(pq.size()){
            int t=pq.top();
            pq.pop();
            if(ump.find(t)!=ump.end()){
                return t;
            }
            
        }
        return -1;
    }
};