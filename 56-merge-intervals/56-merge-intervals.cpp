class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int start, end, prev_last;
        
        
        ans.push_back(intervals[0]);
        for(int i=0;i<n;i++)
        {
            start=intervals[i][0];
            end=intervals[i][1];
            prev_last=ans.back()[1];
            
            if(start<=prev_last)
            {
                ans.back()[1]=max(end, ans.back()[1]);
                ans.back()[0]=min(start, ans.back()[0]);
            }
            
            
            else
                ans.push_back(intervals[i]);
            
            
        }
        return ans;
        
    }
};