class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score =0, max_score=0;
        int n=tokens.size();
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(tokens[i]<=power)
                
            {
                power-=tokens[i];
                score++;
                i++;
                max_score=max(max_score, score);
            }
            
            else if( score>0)
            {
                score--;
                power+=tokens[j--];
            }
            else
                break;
        }
        return max_score;
    }
};