class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> ump;
        for(auto i:arr)
            ump[i]++;
        priority_queue<int> pq;
        for(auto i:ump)
            pq.push(i.second);
        int n=arr.size();
        int sum=0;
        int ans=0;
        if(n&1)
            n=n/2+1;
        else
            n=n/2;
        while(sum<n)
        {
            sum+=pq.top();
            ans++;
            pq.pop();
        }
        return ans;
    }
};