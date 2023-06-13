#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0,n1=0,n2=0;
	cin>>n;
	while(n--)
	{
		cin>>n1>>n2;
		int a[n1];
		for(int i=0;i<n1;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n1;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
