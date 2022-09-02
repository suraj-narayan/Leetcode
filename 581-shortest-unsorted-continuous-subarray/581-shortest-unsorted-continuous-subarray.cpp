class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr=nums;
        sort(arr.begin(), arr.end());
        int n=nums.size();
        int start=-99;
        int end= -99;
        for(int i=0;i<n;i++)
            if(arr[i]!=nums[i])
            {
                start=i;
                break;
            }
        for(int i=n-1;i>-1;i--)
            if(arr[i]!=nums[i])
            {
                end=i;
                break;
            }
        
        if(start==-99 and end==-99)
            return 0;
        else
            return end-start+1;
    }
};