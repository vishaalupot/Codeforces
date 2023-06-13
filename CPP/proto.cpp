#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	
	cin>>n;
	
	while(n--)
	{
		cin>>s;
		int cntr=1;
		for(int i=0;i<s.length();i++)
		{
			int flag=0;
			for(int j=i+1;j<s.length();j++)
			{
				if(s[i]==s[j])
				{
					cntr++;
				}
				if(cntr==2)
				{
					cout<<s[i];
					flag=1;
					break;
				}
				
			}
			if(flag==1)
			{
				break;
			}
		}
	}
	
}

