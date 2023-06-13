#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,temp,m=2;
	cin>>a>>b;
	int c[a],d[a];
	for(int i=0;i<a;i++)
	{
		cin>>c[i];
		d[i]=c[i];
	}
	sort(d,d+a);
	for(int i=0;i<a;i++)
	{
		if(d[a-1]==c[i])
		{
			temp=i;
		}
	}
	if(d[a-1]>b)
	{
	if(d[a-1]/2>a)
	{cout<<temp+1;}
	else
	{
		
		while(d[a-m]%2<=a)
		{
			m--;
		}
		for(int i=0;i<a;i++)
		{
		if(d[a-m]==c[i])
		{
			cout<<i;
		}
		}
	}
	}
	else
	{
	cout<<a;
	}
	
}
