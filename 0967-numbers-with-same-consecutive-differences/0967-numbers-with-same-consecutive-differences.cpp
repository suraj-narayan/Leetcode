class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        if(n==0)
            return ans;
        queue<int> qt;
        for(int i=1;i<=9;i++)
            qt.push(i);
        n--;
        while(n--) {
            int t = qt.size();
            while(t--) {
                int a = qt.front();
                qt.pop();
                if(k==0) {
                    qt.push(a*10+(a%10));
                }
                else {
                if((a%10)+k<10)
                    qt.push(a*10+k+(a%10));
                if((a%10)-k>-1)
                    qt.push(a*10-k+(a%10));
                }
            }
        }
        while(qt.size())
        {
            ans.push_back(qt.front());
            qt.pop();
        }
        return ans;
    }
};