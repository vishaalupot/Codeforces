#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	int a[n][2],b[n-1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
		cin>>a[i][j];
		}
	}
	c=(a[0][1]-a[1][0])+a[1][1];
	b[0]=c;
	for(int i=1;i<=n-1;i++)
	{
		b[i]=(c-a[i+1][0])+a[i+1][1];
		c=b[i];
	}
	b[n-1]=a[0][0]+a[0][1];
	sort(b,b+(n));
	cout<<b[n-1];

}
