class Solution {
public:
    
    unordered_map<char, vector<char>> ump;
    
    void helper()
    {
        ump['2'].push_back('a');
        ump['2'].push_back('b');
        ump['2'].push_back('c');
        ump['3'].push_back('d');
        ump['3'].push_back('e');
        ump['3'].push_back('f');
        ump['4'].push_back('g');
        ump['4'].push_back('h');
        ump['4'].push_back('i');
        ump['5'].push_back('j');
        ump['5'].push_back('k');
        ump['5'].push_back('l');
        ump['6'].push_back('m');
        ump['6'].push_back('n');
        ump['6'].push_back('o');
        ump['7'].push_back('p');
        ump['7'].push_back('q');
        ump['7'].push_back('r');
        ump['7'].push_back('s');
        ump['8'].push_back('t');
        ump['8'].push_back('u');
        ump['8'].push_back('v');
        ump['9'].push_back('w');
        ump['9'].push_back('x');
        ump['9'].push_back('y');
        ump['9'].push_back('z');

                

        
    }
    
    
    void util(vector<string> &arr, string t,  string digits, int i, int n)
    {
        if(i==n)
        {
            arr.push_back(t);
            return;
        }
        
        for(int j=0;j<ump[digits[i]].size();j++)
        {
            t+=ump[digits[i]][j];
            util(arr, t, digits, i+1, n);
            t.erase(t.begin()+i);
        }
        return;
        
        
        
        
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        
        helper();
        vector<string> arr;
        if(n==0)
            return arr;
        util(arr, "", digits, 0, n);
        return arr;
        
    }
};