class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int, int> ump;
        for(char c:num)
            ump[c-'0']++;
        for(int i = 0;i<num.size();i++) {
            if(ump[i]!=(num[i]-'0'))
                return false;
        }
        return true;
    }
};