class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i=0;
        while(i<n) {
            while(i<n and s[i] ==' ')
                i++;
            int j= i;
            while(j<n and s[j]!= ' ')
                j++;
            int low = i, high = j-1;
            i = j;
            while(low<high) {
                char c = s[low];
                s[low] = s[high];
                s[high] = c;
                low++;
                high--;
            }
        }
        return s;
    }
};