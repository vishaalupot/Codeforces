#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a,b,c,d;
	cin>>a>>b;
	c=a/2;
	if(a%2==0)
	{
		c=a/2;
		if(b<=(c))
		{
			cout<<(b*2-1);
		}
		else
		{
		cout<<(b-((c)))*2;
		}
	}
	else
	{
		if(b-1<=(c))
		{
			d=(b*2)-1;
			cout<<d;
		}
		else
		{
			cout<<(b-((c)+1))*2;
		}
	}
}
