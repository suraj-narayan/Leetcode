class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        unordered_map<int, int> ump;
        for(int i=0;i<n;i++)
        {
            if(ump.find(nums[i])!=ump.end())
            {
                if(ump[nums[i]]==2)
                {
                    nums[i]=INT_MIN;
                    continue;
                }
                else
                    ump[nums[i]]++;
            }
            else
                ump[nums[i]]++;
            count++;
            
        }
        
        
        int i=0;
        while(i<n)
            
        {
            if(nums[i]==INT_MIN)
            {
                int j=i+1;
                while(j<n and nums[j]==INT_MIN)
                    j++;
                if(j==n)
                    break;
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
            i++;
        }
        return count;
        
        
        
        
        
        
    }
};