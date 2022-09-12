class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ans(n, 0);
        int x=0, y=0, z=0;
        ans[0]=1;
        for(int i=1;i<n;i++) {
            int mp=ans[x]*2;
            int thm=ans[y]*3;
            int fvm=ans[z]*5;
            
            
            ans[i]=min(mp, min(thm, fvm));
            if(ans[i]== mp) x++;
            if(ans[i]== thm) y++;
            if(ans[i]== fvm) z++;
            
        }
        return ans[n-1];
    }
};