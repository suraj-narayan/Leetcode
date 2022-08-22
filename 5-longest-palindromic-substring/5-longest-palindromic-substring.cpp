class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        
        
        string ans="";
        int len=0;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;j++,i++){
                if(g==0){
                    dp[i][j]=1;
                    
                }
                else if(g==1){
                    if(s[i]==s[j]) dp[i][j]=1;
                }
                else{
                    
                    if(dp[i+1][j-1]==1){
                        if(s[i]==s[j]) { dp[i][j]=1;}
                        
                    }
                    
                }
                if(dp[i][j]==1) len=g+1;
            }
        }
        
        for(int i=0,j=len-1;j<n;i++,j++){
            if(dp[i][j]==1){
                ans=s.substr(i,len);
                break;
            }
        }
        return ans;
    }
};