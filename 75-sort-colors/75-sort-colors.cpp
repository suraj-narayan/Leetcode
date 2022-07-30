class Solution {
public:
    void sortColors(vector<int>& nums) {
     int red=0, white=0, blue=0;
        for(auto i:nums)
        {        if(i==0)
                red++;
            if(i==1)
                white++;
            if(i==2)
                blue++;
    }
        
        int i=0;
        while(red)
        {
            nums[i++]=0;
            red--;
        }
        while(white)
        {
            nums[i++]=1;
            white--;
        }
        while(blue)
        {
            nums[i++]=2;
            blue--;
        }
        
        
        
        
        
        
    }
};