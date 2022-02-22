class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int n =machines.size();
        int ans=0, avg, dif=0, prefix=0;
        int sum=accumulate(machines.begin(), machines.end(), 0);
        if(sum%n!=0)
            return -1;
        avg=sum/n;
        for(int i=0;i<n;i++)
        {
            dif=machines[i]-avg;
            ans=max({ans, dif, abs(prefix)});
            prefix+=machines[i]-avg;
            
        }
        return ans;
    }
};