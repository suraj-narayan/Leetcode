class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        int ans=0;
        int minn=values[n-1]-n+1;
        for(int i=n-2;i>-1;i--) {
            
            ans=max(ans, values[i]+i+minn);
            minn=max(minn, values[i]-i);
        
        }
        return ans;
    }
};