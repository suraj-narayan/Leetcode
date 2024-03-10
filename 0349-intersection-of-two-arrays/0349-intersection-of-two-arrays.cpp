class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        set<int> st(nums1.begin(), nums1.end());
        set<int> st2(nums2.begin(), nums2.end());
        for(int i: st) {
            if(st2.find(i)!=st2.end())
                ans.push_back(i);
        }
        return ans;
    }
    
};