class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n =words.size();
        unordered_map<char, int> ump;
        for(string word: words) {
            for(char c:word) {
                ump[c]++;
            }
        }
        for(auto i:ump) {
            if(i.second%n!=0)
                return false;
        }
        return true;
    }
};