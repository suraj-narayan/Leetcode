class Solution {
public:
    
    long long solve(string a)
    {
        int n=a.size();
        vector<int> arr(n);
        unordered_map<char, int> ump;
        
        int prev=1;
        for(int i=0;i<n;i++)
        {
            if(ump.find(a[i])==ump.end())
            {
                ump[a[i]]=prev++;
                
            }
            arr[i]=ump[a[i]];
        }
        
        long long ans=0;
        for(int i=0;i<n;i++)
            ans=ans*(i+1)+arr[i];
        
        return ans;
        
    }
    
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        long long res=solve(pattern);
        for(int i=0;i<words.size();i++)
        {
            long long temp=solve(words[i]);
            if(res==temp)
                ans.push_back(words[i]);
        }
        return ans;
    }
};