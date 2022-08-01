class Solution 
{
public:
	int myAtoi(string s) 
	{
		if(s.size()==0) return 0;
		int i=0;
		while(i<s.size() && s[i]==' ')
			i++;
		s=s.substr(i);
		int sign=1;
		if(s[0]=='-') sign=-1;

		if(s[0]=='-'|| s[0]=='+') i=1;
		else i=0;

		long long ans=0;
		int maxi=INT_MAX,mini=INT_MIN;
		while(i<s.size())
		{
			if(s[i]==' ' || !isdigit(s[i])) break;
			ans=ans*10+s[i]-'0';
			if(sign==-1 && -1*ans<mini) return mini;
			if(sign==1 && ans>maxi) return maxi;
			i++;
		}
		ans*=sign;
		return ans;
	}
};