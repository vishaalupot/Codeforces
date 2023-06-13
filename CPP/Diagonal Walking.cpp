#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	int n,c=0;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='U' || s[i]=='R')
		{
		if(s[i+1]=='R' && s[i]=='U')
		{
			c++;
			i++;
		}
		else if(s[i+1]=='U' && s[i]=='R')
		{
			c++;
			i++;
		}
		}
	}
	cout<<n-c;
}
