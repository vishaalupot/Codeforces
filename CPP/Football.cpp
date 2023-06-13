#include<iostream>
using namespace std;
int main()
{
	int n,cnt=0,p=0;
	cin>>n;
	string a;
	int b[n],dup[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin>>a;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				cnt++;
				dup[j]=0;
			}
		}
		if(dup[i]!=0)
		{
			dup[i]=cnt;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		if(dup[i]>0)
		{
			b[p]=a[i];
			c[p]=dup[i];
			p++;
		}
	}
	int max=c[0],temp=0;
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<p;j++)
		{
			if(c[i]>max)
			{
				max=c[j];
				cout<<max;
				temp=j;
			}
		}
	}	
	//cout<<b[temp];
}	
	

