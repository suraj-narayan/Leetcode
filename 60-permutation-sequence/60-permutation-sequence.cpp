#define ll int

class Solution {
public:
    
    ll factorial(ll n){
        if(n<=1){
            return 1;
        }else{
            return n*factorial(n-1);
        }
    }

    string generateKthPermutation(string str, ll k){
        sort(str.begin(), str.end());

        ll pos=1, n= str.size();
        ll fact=factorial(n-1);

        if(k==1){
            return str;
        }else if(k<fact){
           return str[0]+generateKthPermutation(str.substr(1), k); 
        }
        while((pos*fact)<k){
            pos++;
        }
        swap(str[0], str[pos-1]);
        pos--;
        return str[0]+generateKthPermutation(str.substr(1), k-(pos*fact));
    }

    string getPermutation(int n, int k) {
        string str="";
        for(ll i=1;i<=n;i++){
            str+=to_string(i);
        }
        return generateKthPermutation(str, k);
    }
};