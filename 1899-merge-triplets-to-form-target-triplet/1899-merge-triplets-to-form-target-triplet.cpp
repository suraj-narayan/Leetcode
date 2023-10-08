class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int ans = 0;
        for(auto i:triplets) {
            if(ans==7)
                return true;
            if( i[0]>target[0] or i[1]>target[1] or i[2]>target[2])
                continue;
            for(int j =0; j<3;j++) {
                if(i[j] == target[j]) 
                    ans = ans | (1<<j);
            }
        }
        return ans==7;
        
    }
};