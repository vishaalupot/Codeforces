#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sort(a,a+n);
	int h=a[n-1];
	long int nw=((h*(h+1))/2);
	while(nw>sum)
	{
		n=n-1;
		h=a[n-1];
		nw=((h*(h+1))/2);
	}
	cout<<h;
}
