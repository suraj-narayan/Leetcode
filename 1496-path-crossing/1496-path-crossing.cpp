class Solution {
public:
    bool isPathCrossing(string path) {
        int x =0 , y =0;
        set<pair<int,int>> st;
        st.insert(make_pair(0,0));
        for(char c:path) {
            if(c=='N')
                x++;
            else if(c=='S')
                x--;
            else if(c=='W')
                y++;
            else
                y--;
            if(st.find(make_pair(x, y))!=st.end())
                return true;
            st.insert(make_pair(x,y));
        }
        return false;
    }
};