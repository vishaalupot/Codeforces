#include<iostream>
#include<math.h>
using namespace std;
int main()
{	
	int n,sum=0,sum1=0,sum2=0,c=0,d=0;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='C')
			{
				c++;
			}
			if(a[j][i]=='C')
			{
				d++;
			}
		}
		if(c>1)
		{
		sum1=abs((c*(c+1)/2)-c);
		//cout<<sum1;
		c=0;
		}
		else
		{c=0;}
		if(d>1)
		{
		sum2=abs((d*(d+1)/2)-d);
		d=0;
		}
		else
		{d=0;}
		sum=sum+sum1+sum2;
		sum1=0;sum2=0;
	}
	cout<<sum;
}
