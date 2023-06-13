#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c[1000],sum=0;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<a;i++)
	{
	if(c[i]<=0)
	{
	sum=sum+c[i];
	}
	}
	cout<<abs(sum);

}
