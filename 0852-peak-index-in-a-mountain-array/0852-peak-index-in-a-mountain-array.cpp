class Solution {
public:
    
    int bsearch(vector<int>& arr, int low, int high) {
        if(low ==high)
            return low;
        int mid = (low+high)/2;
        if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
            return mid;
        if(arr[mid]>arr[mid-1] and arr[mid]<arr[mid+1])
            return bsearch(arr, low+1, high);
        if(arr[mid]<arr[mid-1] and arr[mid]>arr[mid+1])
            return bsearch(arr, low, high-1);
        return -1;
    }
    
    int peakIndexInMountainArray(vector<int>& arr) {
        int n= arr.size();
        int ans =  bsearch(arr, 0, n-1);
        return ans;
    }
};