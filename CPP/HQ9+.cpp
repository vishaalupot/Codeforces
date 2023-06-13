#include<iostream>
#include <ctype.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,nw=0,c=0;
	string s;
	cin>>s;
	n=s.length();
	for(int i=0;i<n;i++)
	{
		if(isdigit(s[i]))
		{
			c++;
		nw=int(s[i]);
		if(s[i]==55)
		{
		if(s[i+1]==50)
		{
		cout<<"YES";
		exit(0);
		}
		}
		else if(s[i]==55)
		{
		if(s[i+1]==49)
		{
		cout<<"YES";
		exit(0);
		}
		}
		else if(nw==57)
		{
		cout<<"YES";
		exit(0);
		}
		else if(s[i]==43)
		{
		cout<<"YES";
		exit(0);
		}
		}
		
		else
		{
		if(s[i]=='H')
		{	
		cout<<"YES";
		exit(0);
		}
		else if(s[i]=='Q')
		{
		cout<<"YES";
		exit(0);
		}
		else if(s[i]=='9')
		{
		cout<<"YES";
		exit(0);
		}
		else if(s[i]=='+')
		{
		cout<<"YES";
		exit(0);
		}

	}
}
cout<<"NO";
}
