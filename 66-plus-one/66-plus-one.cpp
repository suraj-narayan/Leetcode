class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        int carry=1;
        while(carry>0 and i>-2)
        {
            if(i==-1){
                digits.insert(digits.begin(), 1);
                break;
                
            }
            digits[i]++;
            if(digits[i]>9)
            {
                digits[i]%=10;
                carry=1;
                i--;
                
            }
            else
                break;
        }
        return digits;
    }
};