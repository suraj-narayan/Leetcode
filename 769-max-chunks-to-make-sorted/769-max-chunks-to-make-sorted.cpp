class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            int temp_sum = (i *(i + 1))/2;  //  the sum that should be their till index i to have valid permutation
            sum+=arr[i];
            if(temp_sum == sum)
                count++;
        }
        return count;
    }
};