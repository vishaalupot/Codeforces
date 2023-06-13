#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	unsigned long long int a,b,c,n;
	int diff=0,difff=0,dif=0;
	int p[3],q[3];
	cin>>n;
	a=n/6;
	a++;
	b=n/8;
	b++;
	c=n/10;
	c++;
	while(dif<6)
	{
	a--;
	dif=n-(a*6);
	}
	while(diff<6)
	{
	b--;
	diff=n-(b*8);
	}
	while(difff<6)
	{
	c--;
	difff=n-(c*10);
	}
	p[0]=a*6;
	p[1]=b*8;
	p[2]=c*10;
	q[0]=a*15;
	q[1]=a*20;
	q[2]=a*25;
	sort(p,p+3);
	sort(q,q+3);
	for(int i=0;i<100;i++)
	{

		if(p[2]+(6*i)>=n)
		{
			cout<<q[0]+(i*15);
			break;
		}
		if(p[2]+(8*i)>=n)
		{
			cout<<q[0]+(20*i);
			break;
		}
		if(p[2]+(10*i)>=n)
		{
			cout<<q[0]+(25*i);
			break;
		}
	}
}
