class Solution {
public:
    
    
    
    int longestCommonSubsequence(string text1, string text2) {
        int k=text1.size();
        int l=text2.size();
        vector<vector<int>> t(k+1,vector<int>(l+1,0));
        for(int i=1;i<=k;i++)
        {
            for(int j=1;j<=l;j++)
            {
                if(text1[i-1]==text2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
        return t[k][l];
    }
};