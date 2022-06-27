class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0, count=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
                count++;
                nums.erase(nums.begin()+i);
                n--;
                continue;
            }
            i++;
        }
        while(count--)
            nums.push_back(0);
        
    }
};