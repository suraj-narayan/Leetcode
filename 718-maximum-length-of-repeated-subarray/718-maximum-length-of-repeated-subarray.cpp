class Solution {
public:
    int memo[1001][1001];
    
    int util(vector<int>& nums1, vector<int>& nums2, int i, int j) {
        if(i>=nums1.size() || j>=nums2.size()) return 0;
        int len=0;
        
        if(memo[i][j]) return memo[i][j];
        
        // while(i<nums1.size() && j<nums2.size() && nums1[i]==nums2[j]) len++, i++, j++;
        if(nums1[i]==nums2[j]) len+=1+util(nums1, nums2, i+1, j+1);
        
        return memo[i][j]=len;
    }
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size();
        
        int maxLen=0;
        for(int i=0; i<n1; i++) for(int j=0; j<n2; j++) maxLen=max(maxLen, util(nums1, nums2, i, j));
        return maxLen;
    }
};