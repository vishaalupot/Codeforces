#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,c,l=0,x[100],sum=1;
	float b[100],d;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
	}
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>d;
		for(int i=0;i<a;i++)
		{
			if((d/b[i])==int(d/b[i]))
			{
			 x[l]=d/b[i];
			 l++;
			}
		}
	}
	sort(x,x+l, greater<int>());
	for(int i=0;i<l;i++)
	{
		if(x[i]==x[i+1])
		{
			sum=sum+1;
		}
		else if(x[i]==0 && i==0)
		{
			cout<<"0";
			exit(0);
		}
		else if(x[i]!=x[i+1] && i==0)
		{
		cout<<"1";
		exit(0);	
		}
		else
		{
			cout<<sum;
			exit(0);
		}
		
	}
}
