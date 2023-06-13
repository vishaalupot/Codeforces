#include<iostream>
using namespace std;
int main()
{
	int a,b;
	string s;
	cin>>a>>b;
	cin>>s;
	for(int i=0;i<b;i++)
	{
		for(int j=a-1;j>=0;j--)
		{
			if(s[j]>s[j-1])
			{
				s[j-1]='G';
				s[j]='B';
				j--;
			}
		}
	}	
	for(int i=0;i<a;i++)
	{
			cout<<s[i];
	}
}
