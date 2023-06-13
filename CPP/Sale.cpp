#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c[1000],sum=0,cntr=0;
	cin>>a>>b;
	for(int i=0;i<a;i++)
	{
		cin>>c[i];
	}
	sort(c,c+a);
	
	for(int i=0;i<a;i++)
	{
		if(c[i]<=0 && cntr<b)
		{
			sum=sum+c[i];
			cntr++;
		}
	}
	
	cout<<abs(sum);

	
}
