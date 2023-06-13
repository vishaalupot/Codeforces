#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int x=0,c=0,y=0;
	string a,b;
	cin>>a;
	cin>>b;
	x=a.length();
	y=b.length();
	if(x!=y)
	{
		cout<<"No";
		exit(0);
	}
	for(int i=0;i<x;i++)
	{
		if(a[i]=='a' || a[i]== 'i' || a[i]=='e' || a[i]=='u'||a[i]=='o')
		{
		if(b[i]=='a' || b[i]=='i' || b[i]=='e' || b[i]=='u'||b[i]=='o')
		{
			c++;
		}
		}
		
		else
		{
		if(b[i]=='a' || b[i]=='i' || b[i]=='e' || b[i]=='u'||b[i]=='o')
		{
		cout<<"No";
		exit(0);
		}
		else
		{
			c++;
		}
		}
	}
	if(c==x)
	{cout<<"Yes";}
	else
	{
	cout<<"No";
	}
}
