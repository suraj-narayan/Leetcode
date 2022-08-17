class Solution {
    
public:
    
    string help(string str, vector<string>& v)
    {
        string ans="";
        for(auto i:str)
        {
            ans+=v[i-'a'];
        }
        return ans;
    }
    
    
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> ans;
        for(auto str:words)
        {
            ans.insert(help(str, v));
        }
        return ans.size();
        
        
    }
};