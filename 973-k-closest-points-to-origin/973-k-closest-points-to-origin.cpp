class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> arr;
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        vector<int> temp(3, 0);
        for(int i=0;i<points.size();i++)
        {
            temp[0]=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            temp[1]=points[i][0];
            temp[2]=points[i][1];
            pq.push(temp);
            
        }
        for(int i=0;i<k;i++)
        {
            vector<int> temp(pq.top().begin(), pq.top().end());
            pq.pop();
            arr.push_back({temp[1], temp[2]});
        }
        return arr;
        
    }
};