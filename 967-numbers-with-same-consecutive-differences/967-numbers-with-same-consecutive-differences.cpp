class Solution {
public:
    
    
    void help(vector<int>& ans, int val, int i, int n, int k )
    {
        if(i==n)
        {
            ans.push_back(val);
            return;
        }
        if(i==0)
        {
            for(int j=1;j<=9;j++)
                help(ans, j, 1, n, k);
        }
        else
        {
            int temp=val%10;
            if(k==0)
                help(ans, val*10+temp, i+1, n, k);
            else {
            if(temp+k<=9)
                help(ans, val*10+temp+k, i+1, n, k);
            if(temp-k>=0)
                help(ans, val*10+temp-k, i+1, n, k);
            }
        }
    }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        help(ans, 0, 0, n, k);
        return ans;
    }
};