#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,c,h=0,sum=0;
	float b[50],d[50];
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>b[i];
	}
	cin>>c;
	for(int i=0;i<c;i++)
	{
	cin>>d[i];
	}
	float e[a*c];
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<c;j++)
		{
			e[h]=(d[j]/b[i]);
			h++;
		}
	}
	sort(e,e+h);
	int l=0,z[h],ctr=0;
	for(int i=0;i<h-1;i++)
	{
		if(e[i]==e[i+1] && ctr==0)
		{
			ctr++;
			sum=sum+2;
		}
		else if(e[i]==e[i+1])
		{
			sum=sum+1;
		}
		else
		{
			z[l]=sum;
			l++;
			sum=0;
			ctr=0;
		}
	}
	sort(z,z+l);

		if(z[l-1]==0)
		{
			cout<<"1";
		}
		else{cout<<z[l-1];}
	
	}
	

