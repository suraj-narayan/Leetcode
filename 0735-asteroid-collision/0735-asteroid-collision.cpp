class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        int n= asteroids.size();
        stack<int> st;
        
        for(int i=0;i<n;i++) {
            int flag = 1;
            while(!st.empty() and (st.top()>0 and asteroids[i]<0)) {
                if(abs(st.top())<abs(asteroids[i]))
                {
                    st.pop();
                    continue;
                }
                else if (abs(st.top()) == abs(asteroids[i]))
                    st.pop();
                flag=0;
                break;
            }
            if(flag)
                st.push(asteroids[i]);
        }
        
        while(st.size()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
        
        
        
        
        
    }
};