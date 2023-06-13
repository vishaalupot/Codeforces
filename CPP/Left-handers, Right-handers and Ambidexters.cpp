#include <iostream>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c,nw=0;
	cin>>a>>b>>c;
	nw=a+b+c;
	if(a<b && b>c)
	{
	if(a+c<b)
	{
		cout<<2*(a+c);
	}
	else
	{
		cout<<2*b;
	}
	}
	else if(b<a && a>c)
	{
		if(b+c<a)
		{
			cout<<2*(b+c);
		}
		else
		{
			cout<<2*a;
		}
	}
	else if(b==a && b==c)
	{
		cout<<((b+a+c)/2)*2;
	}
	else
	{
		while(nw%2!=0)
		{
			nw--;
		}
		cout<<nw<<"l";
	}
}
