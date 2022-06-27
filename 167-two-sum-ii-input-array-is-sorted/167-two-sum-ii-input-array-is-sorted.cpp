class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n=numbers.size();
        int low=0, high=n-1;
        while(low<high)
        {
            int l=numbers[low];
            int h=numbers[high];
            if(l+h==target)
            {
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
            }
            if(l+h<target)
                low++;
            if(l+h>target)
                high--;
            
            
        }
        return ans;
    }
};