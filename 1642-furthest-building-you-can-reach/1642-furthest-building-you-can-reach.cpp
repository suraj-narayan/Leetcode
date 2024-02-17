class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=1;i<n;i++)
        {
            int diff=heights[i]-heights[i-1];
            if(diff>0)
            {
                if(pq.size()<ladders)
                {
                    pq.push(diff);
                }
                else
                {
                    if(ladders and pq.top()<diff)
                    {
                        int x=pq.top();
                        pq.pop();
                        pq.push(diff);
                        bricks-=x;
                    }
                    else
                    {
                        bricks-=diff;
                    }
                    if(bricks<0)
                        return i-1;
                        
                }
            }
        }
        return n-1;
    }
};