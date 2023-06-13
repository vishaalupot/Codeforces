#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n,c=0,d=0,x;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		x=s.length();
		for(int j=0;j<x;j++)
		{
			if(s[j]=='A' || s[j]=='C')
			{
				c++;
			}
			if(s[j]=='B')
			{
				d++;
			}
		}
	if(c==d)
	{
		cout<<"YES"<<endl;
		c=0;
		d=0;
	}
	else
	{
		cout<<"NO"<<endl;
		c=0;
		d=0;
	}
}
	
}
