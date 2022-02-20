class Solution {
public:
    int candy(vector<int>& ratings) {
          int n = ratings.size();
        vector<int> c(n,1);
        for (int i = 1; i<n; i++)
            if (ratings[i]>ratings[i-1]) c[i]=c[i-1]+1;

		int sum = c[n-1];
        //cout << c[n-1];
        for (int i = n-2; i>-1; i--)
        {
            if (ratings[i]>ratings[i+1]) c[i]=max(c[i],c[i+1]+1);
            //cout << "," << c[i] ;
            sum += c[i];
        }
        return sum;
    
    }
};