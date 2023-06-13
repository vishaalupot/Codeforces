#include<iostream>
using namespace std;
int main()
{
	unsigned long long int a,nw,n,z[1000],l=0,ctr=1;
	cin>>n;
	for(int j=0;j<n;j++)
	{
	cin>>a;
	nw=a*2.5;
	if(nw<=15)
	{
		cout<<"15";
	}
	else
	{
	for(int i=0;i<100 && ctr<=3;i++)
	{
		if((nw+i)%6==0)
		{
			z[l]=nw+i;
			l++;
			ctr++;
		}
		else if((nw+i)%8==0)
			{
			z[l]=(nw+i);
			l++;
			ctr++;
			}
	
		else if((nw+i)%10==0)
		
			{
			z[l]=nw+i;
			l++;
			ctr++;
			}		
	}
	sort(z,z+l);
	cout<<z[1]<<endl;
	}l=0;
	}
}
