#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int res=0,c=0,c1=0;
	while(true)
	{
		res=res+a;
		c1++;
		if(res>b)
		{
		res=res-a;
		c++;
		a--;
		}
		else if(res==b)
		{
			c=abs(c-c1);
			break;
		}
	}
	cout<<c;
}
