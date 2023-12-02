class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> ump;
        for(char c: chars) 
            ump[c]++;
        int ans = 0;
        for(string str: words) {
            bool flag = true;
            unordered_map<char, int> ump2;
            for(char c:str) {
                ump2[c]++;
            }
            for(auto i:ump2) {
                if(ump.find(i.first)==ump.end() or ump[i.first]<i.second)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) 
                ans += str.size();
        }
        return ans;
        
            
    }
};