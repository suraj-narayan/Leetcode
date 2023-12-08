class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> arr(26, 0);
        vector<int> arr2(26, 0);
        for(char c: word1)
            arr[c-'a']++;
        for(char c: word2)
            arr2[c-'a']++;
        for(int i=0;i<26;i++)
            if(abs(arr2[i]-arr[i])>3)
                return false;
        return true;
        
    }
};