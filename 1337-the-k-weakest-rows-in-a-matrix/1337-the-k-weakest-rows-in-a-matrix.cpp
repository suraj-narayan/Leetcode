class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            int j=0;
            while(j<mat[0].size() and mat[i][j]==1)
            {
                count++;
                j++;
            }
            pq.push(make_pair(count, i));
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        for( int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};