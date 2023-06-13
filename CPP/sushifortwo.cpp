#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,c=1,same=0,h=0,sum=0,d=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	same=a[0];
	for(int i=1;i<n;i++)
	{
		if(same==a[i])
		{c++;}		
		if(same!=a[i] || i==n-1)
		{
			d++;
			if(i==n-1 && d==1)
			{
				cout<<"2";
				exit(0);
			}
			same=a[i];
				if(d>=2)
				{
				b[h]=abs((c+sum)-abs(c-sum));
				h++;
				}
				sum=c;
				c=1;
		}
	}
	sort(b,b+h);cout<<b[h-1];
 
}
