class Solution {
public:
    
    
    
    int subtractProductAndSum(int n) {
        int sum=0, mult=1;
        while(n) {
            int temp=n%10;
            n/=10;
            sum+=temp;
            mult*=temp;
        }
        return mult-sum;
    }
};