class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        stack<string> st;
        int n=s.size();
        string temp="";
        while(i<n) {
            if(s[i]==' ') {
                
                if(temp!="") 
                    st.push(temp);
                temp="";
                while(i<n and s[i]==' ') 
                    i++;
                continue;
            }
            temp+=s[i];
            
            i++;
            continue;
            
        }
        if(temp!="")
            st.push(temp);
        string ans="";
        while(st.size()>1) {
            ans+=st.top()+' ';
            st.pop();
        }
        ans+=st.top();
        return ans;
    }
};