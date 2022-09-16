class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n, 0);
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            while(j%n!=i and nums[j%n]<=nums[i])
            {
                j++;
            }
            
            if(nums[i]<nums[j%n])
                arr[i]=nums[j%n];
            else
                arr[i]=-1;
        }
        return arr;
        
    }
};