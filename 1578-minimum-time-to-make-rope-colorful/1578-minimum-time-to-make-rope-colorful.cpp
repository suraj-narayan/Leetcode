class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int total_sum = accumulate(neededTime.begin(), neededTime.end(), 0);
        int i = 0;
        int ans = 0;
        while(i<n) {
            int j = i;
            int subarray_sum = 0, subarray_max = INT_MIN;
            while(j<n and colors[i]==colors[j])
            {
                subarray_sum += neededTime[j];
                subarray_max = max(subarray_max, neededTime[j]);
                j++;
            }
            if(i!=j)
            {
                ans+= (subarray_sum-subarray_max);
            }
            i =j;
            
        }
        return ans;
    }
};