class Solution {
public:
    int minimumTime(string s) {
        
        vector<int> left;
        int n = s.length();
        
        for(int i=0;i<n;i=i+1)    
        {if(s[i]=='1')
            {int a = 2;
             if(left.size()>0){a=left[left.size()-1]+2;}
             left.push_back(min(a,(int)i+1));
            }
        }
        
        if(left.size()==0){return 0;}
        
        vector<int> right(left.size());
        int ptr=left.size()-1;
        for(int i=n-1;i>=0;i=i-1)
            
        {if(s[i]=='1')
            {int a = 2;
             if(ptr<left.size()-1){a=right[ptr+1]+2;}
             right[ptr]=min(a,(int)n-(int)i);ptr--;
            }
        }
        
        int ans=min(left[left.size()-1],right[0]);
        for(int i=1;i<left.size();i=i+1)
        { ans= min(left[i-1]+right[i],ans); }
		
        return ans;
    }
};