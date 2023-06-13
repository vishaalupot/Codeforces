#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n;
	int a[100000][2],sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
			sum1=sum1+a[i][0];
			sum2=sum2+a[i][1];

	}
	if(sum1>=(n/2))
	{
		if(sum2>=(n/2))
		{
			cout<<(n-sum1)+(n-sum2);
		}
		else
		{
			cout<<(n-sum1)+sum2;
		}
	}
	else if(sum1<(n/2))
	{
		if(sum2>=(n/2))
		{
			cout<<(n+(n-sum2));
		}
		else
		{
			cout<<sum1+sum2;
		}
	}

}

