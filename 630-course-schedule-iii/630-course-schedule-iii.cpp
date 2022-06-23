class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](const vector<int> &a, const vector<int> &b){
            return a[1]<b[1];
        });
        
        int n=courses.size();
        
        priority_queue<int> pq;
        
        int time=0;
        
        
        for(auto i:courses)
        {
            if(time+i[0]<=i[1])
            {
                time+=i[0];
                pq.push(i[0]);
            }
            else if(pq.size() and pq.top()>i[0])
            {
                time-=pq.top();
                pq.pop();
                pq.push(i[0]);
                time+=i[0];
                
                
                
                
            }
            
            else 
            {
                if(pq.empty() or pq.top()<=i[0])
                    continue;
            }
        }
        
        
        return pq.size();
        
        
            
    }
};