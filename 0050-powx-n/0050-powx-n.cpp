class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        double ans=0;
        if(n&1)
        {
            double a= myPow(x, abs(n/2));
            ans= a*a*x;
        }
        else
        {
            double a= myPow(x, abs(n/2));
            ans= a*a;
        }
        if(n<0)
            return 1/ans;
        
        return ans;
    }
};