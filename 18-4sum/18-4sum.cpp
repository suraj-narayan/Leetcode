class Solution {
public:
       vector<vector<int>> fourSum(vector<int>& num, int target) {
        vector<vector<int>>ans;
        //sorted to apply 2 ptr approach
        sort(num.begin(),num.end());
      
        int n=num.size();
        //i loop to track 1st ele
        for(int i=0;i<n-3;i++)
        {
            // j loop to track 2nd ele
            for(int j=i+1;j<n-2;j++)
            {
                // look for left over target after considering i,j 
               long long int tar2=target-(long long)(num[i]+num[j]);
                // to find target2....2 pointer approach will be used
                int left=j+1;
                int right=n-1;
                while(left<right)
                {
                    // if(left+right elements are < tar2 then increasing left will give bigger sum because vector is sorted .... hence left++
                    if(num[left]+num[right]<tar2)
                        left++;
                    // else if their sum > tar2 then we will reduce the bigger number from the sum i.e we will reduce right (bigger element bcoz vector sorted) 
                    else if(num[left]+num[right]>tar2)
                        right--;
                    //if sum equals tar2
                    else
                    {
                        // store this quadruplet in vector v
                        vector<int>v(4,0);
                        v[0]=num[i];
                        v[1]=num[j];
                        v[2]=num[left];
                        v[3]=num[right];
                        // push this quadruplet in ans vector
                        ans.push_back(v);
                        // now in order to reduce duplicacy we will increase left till the element at left is equal to v[3](bcoz v[3] stored left element above)
                        while(left<right&&num[left]==v[2])
                            ++left;
                        //same do with right and v[3]
                        while(right>left&&num[right]==v[3])
                            --right;
                    }
                }
                //now we will handle duplicacy in i and j also i.e we will increment j and stop "before" the different element since for loop will also work and increase j 
             
                while(j+1<n-2&&num[j+1]==num[j])
                    j++;
            }
            // same job done as for j
            while(i+1<n-3&&num[i+1]==num[i])
                    i++;
        }
        return ans;
    }
     
};

