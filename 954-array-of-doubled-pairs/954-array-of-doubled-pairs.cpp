class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int,int> m;
        sort(arr.begin(), arr.end(),[](int &a, int &b)
             {
                 return abs(a) < abs(b);
             });
        for(int n : arr)
        {
            m[n]++;
        }
        
        for(int n : arr)
        {
            if(m[n] <= 0) continue;
            m[n]--;
            if(m[2*n] > 0)
            {
                m[2*n]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};