#include<iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	unsigned long long int c=0,n=0;
	string s;
	cin>>s;
	n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
	 		if(s[i+1]=='4')
			{
				
				if(s[i+2]=='4')
				{
					c=c+3;
					i=i+2;
				}
				else
				{
					c=c+2;
					i++;	
				}
			}
			else
			{
				c=c+1;
			}
		}
	}
	if(c==n)
	{cout<<"YES";}
	else
	{cout<<"NO";}

}
