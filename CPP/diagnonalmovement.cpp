#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	unsigned long int n,x,y;
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(abs(x)>=abs(y))
		{
			int a=abs(x);
			while(a--)
			{
				if(y>=0)
				{
					y--;
				}
				else
				{
					y++;
				}
			}
			if(y==0)
				{
					cout<<"YES"<<endl;
				}
			else {cout<<"NO"<<endl;}
		}
		else if(abs(y)>abs(x))
		{
			
			int a=abs(y);
			while(a--)
			{
				if(x>=0)
				{
					x--;
				}
				else
				{
					x++;
				}
			}
			if(x==0)
				{
					cout<<"YES"<<endl;
				}
			else {cout<<"NO"<<endl;}
		}
	}
}
