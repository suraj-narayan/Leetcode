class Solution {
public:
    string intToRoman(int num) {
    
		// build vector with all symbol combination and related numer
        vector<int> sym2num = {1000, 900, 500, 400, 100, 90 ,50, 40, 10, 9,5,4,1};
        vector<string> sym = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V","IV","I"};
        string res;
        
        int i = 0;
        while(num > 0){

            for(int j = 0; j< num / sym2num[i] ; j++){
                res += sym[i];
            }
            num %= sym2num[i];
            i++;
        }
        return res;
    }   
};