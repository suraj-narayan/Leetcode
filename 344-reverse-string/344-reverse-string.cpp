class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0;
        int n=s.size();
        char temp;
        while(low<n/2)
        {
            temp=s[low];
            s[low]=s[n-low-1];
            s[n-low-1]=temp;
            low++;
        }
        
    }
};