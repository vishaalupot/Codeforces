#include<iostream>
using namespace std;
int main()
{
	int a[100][100],sum=0,n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		}
	}
	if(sum==0)
	{
		cout<<"YES";
	}
	else
	{
	cout<<"NO";
	}
}
