class Solution {
public:
    
    void solve(string& str, int left, int right, char c) {
        for(int i=left;i<=right;i++) {
            str[i]=c;
        }
        return;
    }
    
    
    string pushDominoes(string dominoes) {
        vector<pair<int, char>> v;
        int n=dominoes.size();
        for(int i=0;i<n;i++) {
            if(dominoes[i]!='.') 
                v.push_back({i, dominoes[i]});
        }
        if(v.size()==0)
            return dominoes;
        
        if(v[0].second=='L') 
            solve(dominoes, 0, v[0].first, 'L');
        
        for(int i=0;i<v.size()-1;i++ )  {
            if(v[i].second==v[i+1].second) {
                solve(dominoes, v[i].first, v[i+1].first, v[i].second);
            }
            
            
            if(v[i].second=='R' and v[i+1].second=='L') {
                int len=v[i+1].first-v[i].first-1;
                if(len&1) { //if it is odd
                    
                    solve(dominoes, v[i].first, v[i].first+(len/2), 'R');
                    solve(dominoes, v[i].first+(len/2)+2, v[i+1].first, 'L');
                    
                }
                
                else
                {
                    solve(dominoes, v[i].first, v[i].first+(len/2), 'R');
                    solve(dominoes, v[i].first+(len/2)+1, v[i+1].first, 'L');
                }
                
                
                
            }
            
            
        }
        
        
        if(v.back().second=='R')
            solve(dominoes, v.back().first, n-1, 'R');
        
        return dominoes;
        
        
        
    }
};