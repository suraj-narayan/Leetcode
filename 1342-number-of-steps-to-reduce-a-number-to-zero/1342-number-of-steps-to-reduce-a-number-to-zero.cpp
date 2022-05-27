class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        
        int n=num;
        if(n==0)
            return 0;
         while(n)
         {
             if(n&1)
                 count+=2;
             else
                 count++;
             n/=2;
         }
        return count-1;
    }
};