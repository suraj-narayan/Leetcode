class Solution {
public:
    
    int dp[27][20001];
    
     int MOD=1e9+7;
    
    long long solve( char c, int i)
    {
        if(i==0)
            return 1;
        
        if(dp[c-'a'][i]!=-1)
            return dp[c-'a'][i] ;
        long long  ans=0;
        if( c=='a')
            ans = solve( 'e', i-1);
        if( c=='e')
            ans = (solve( 'i', i-1)+solve('a', i-1));
        if( c=='i' )
            ans = (solve( 'a', i-1)+ solve('e', i-1) +solve('o', i-1) + solve('u', i-1));
        if(c=='o')
            ans = (solve( 'i', i-1) +solve( 'u', i-1));
        if( c=='u')
            ans = solve( 'a', i-1) ;
        return dp[c-'a'][i]=ans  % MOD;
    }
    
    
    
    
    int countVowelPermutation(int n) {
        memset(dp, -1, sizeof(dp));
        if(n==1)
            return 5;
        long long ans = solve('a', n-1)+solve('e', n-1)+solve('i', n-1)+solve('o', n-1)+solve('u', n-1);
        
         ans%= MOD;
        return (int) ans;
    }
};