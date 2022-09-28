class Solution {
public:
    int rotatedDigits(int n) {
        
        int count = 0 ;
        
        for(int i = 1 ; i<= n ; i++)
        {
            // Copy The Number
            int x = i;
            
            // We will be checking two conditions
            bool flag1 = false , flag = true ;
            
            while(x)
            {
                // get last digit of the number and remove that digit from current number
                int k = x%10;
                x = x/10;
                
                
                // if digit is 3 , 4 or  7 then there rotation will be invalid so break the loop
                // and make flag false
                if(k == 3 || k == 4 || k == 7 )
                {
                     flag = false ;
                      break;
                }
                
                // if digit is 6 , 9 , 5 or 2 there rotaion will be valid and value will be changed so make flag1 true
                else if( k == 6 || k == 9 || k == 5 || k == 2  )
                {
                   flag1 = true;
                }
                
            }
            
            // this condition says that if we encountered all valid digits and at least 
            // one digit whose value changes after rotation than increment the answer
            if(flag && flag1)
                count++;
        }
        
        return count;
    }
};
