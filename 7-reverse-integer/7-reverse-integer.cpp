class Solution {
public:
    int reverse(int x) {
        long long  ans=0, flag=0;
        if(x<0)
            
        {
            flag=1;
            x=abs(x);
        }
        while(x)
        {
            int temp=x%10;
            x/=10;
            ans=ans*10+temp;
        }
        
        if(ans>INT_MAX or ans<INT_MIN)
            return 0;
        
        
        if(flag)
            return -(int)ans;
        return (int)ans;
        
    }
};