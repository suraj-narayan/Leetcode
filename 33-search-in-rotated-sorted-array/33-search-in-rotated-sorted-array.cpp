class Solution {
public:
    int search(vector<int>& nums, int target) {
        //binary_search.
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2; //calculate mid
            if(nums[mid]==target) // check if mid element is target element.
            {
                return mid;
            }
            else if(nums[mid]>target) // check if mid ele is greater than target
            {
                //2 possibilities either rotation has started from mid | before mid or from after mid
                 if(nums[l]>nums[mid]||nums[l]<=target)
                 {
                     r=mid-1;
                 }
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(nums[l]<=nums[mid]|| nums[l]>target)
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};
