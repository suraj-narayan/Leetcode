class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        // run over the vector. 
        // we look on pair (a, b)
		// if ( a > b ) ==> we need decide which number to change a or b.
        
        int counter = 0;
        int n = nums.size();
        int i;
        for (i = 0; i < n-1; i++){
            if (nums[i] > nums[i+1]){
                
                if (i == 0){
                   nums[i] = nums [i+1];
                    break;
                }
                
                if (i == n-2){
                    nums[i+1] = nums[i];
                    break;
                }
                
                if (nums[i+1] <= nums[i+2] && nums[i-1] <= nums[i+1]){
                    nums[i] = nums[i-1];
                    break;
                }
                
                nums[i+1] = nums[i];
                break;
            }
        }
        
        for (i = 0 ;i < n - 1; i++){
            if (nums[i] > nums[i+1]){
                return false;
            }
        }
        return true;
    }
};