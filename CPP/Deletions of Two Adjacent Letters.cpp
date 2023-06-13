#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	string s1;
	char s2;
	cin>>a;
	int flag=0;
	while(a--)
	{
		cin>>s1;
		cin>>s2;
		
		for(int i=0;i<s1.length();i++)
		{
			
			if(s2==s1[i] && (i+1)%2!=0)
			{
				cout<<"Yes"<<endl;
				flag=-1;
				break;
			}
			
		}
		if(flag==0)
		{
			cout<<"NO"<<endl;
			
		}
		flag=0;
	}
}
