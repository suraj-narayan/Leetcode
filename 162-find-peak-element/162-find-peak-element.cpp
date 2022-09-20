class Solution {
public:
    
    
    int solve(vector<int>& arr, int i, int j) {
        if(i>j)
            return -1;
        if(i==j) 
        {
            if(i==0)
                if(arr[i]>arr[i+1])
                    return i;
            if(i==arr.size()-1)
                if(arr[i]>arr[i-1])
                    return i;
            if(arr[i]>arr[i+1] and arr[i]>arr[i-1])
                return i;
            return -1;
        }
        
        int mid=(i+j)/2;
        if(mid==0)
            if(arr[mid]>arr[mid+1])
                return mid;
        if(mid==arr.size()-1)
            if(arr[mid]>arr[mid-1])
                return mid;
        if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1])
            return mid;
        
        int temp=solve(arr, i, mid-1);
        if(temp!=-1)
            return temp;
        temp=solve(arr, mid+1, j);
        if(temp!=-1)
            return temp;
        return -1;
        
        
    }
    
    
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        
        return solve(nums, 0, nums.size()-1);
    }
};