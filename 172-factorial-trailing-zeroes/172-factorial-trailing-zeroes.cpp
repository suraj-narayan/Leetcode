class Solution {
public:
    int trailingZeroes(int n) {
        int ans, five_c=0, two_c=0;
        if(n==0)
            return 0;
        for(int i=1;i<=n;i++)
        {
            int temp=i;
            while(temp>0 and temp%5==0)
            {
                five_c++;
                temp/=5;
            }
             temp=i;
            while(temp>0 and temp%2==0)
            {
                two_c++;
                temp/=2;
            }
        }
        return min(five_c, two_c);
    }
};