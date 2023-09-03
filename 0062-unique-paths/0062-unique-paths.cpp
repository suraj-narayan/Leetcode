class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> arr(n, 1);
        vector<int> temp(n, 1);
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                temp[j]=temp[j-1]+arr[j];
            }
            arr= temp;
            
        }
        return arr[n-1];
        
    }
};