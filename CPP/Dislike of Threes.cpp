#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,nw;
	float m;
	cin>>n;
	m=n/3;
	nw=n;
	for(int i=0;i<m;i++)
	{
		nw++;
		
		if(nw%3==0)
		{
			nw++;
			i--;
		}
		else if(nw%10==3)
		{
			nw++;
			i--;
		}
	
		
	}
	cout<<nw;
	for(int i=0;i<2000;i++)
	{
	if(nw%3==0)
	{
		nw++;
	}
	else if(nw%10==3)
	{
		nw++;
	}
	else
	{cout<<nw;
		exit(0);
		}
	}
}
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,c=0,a[2000],m,j=1;
	cin>>m;
	for(int i=0;i<2000;i++)
	{
		if(j%3!=0)
		{
		if(j%10!=3)
		{
		a[c]=j;
		c++;
		}
		}
		j++;
	}
	for(int i=0;i<m;i++)
	{
	cin>>n;
	cout<<a[n-1]<<endl;

	}
}
