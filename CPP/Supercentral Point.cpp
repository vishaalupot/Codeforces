#include<iostream>
using namespace std;
int main()
{
	int n,cntr=0,a[200][2],x=0,y=0,z=0,zi=0;;
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
		for(int j=0;j<n;j++)
		{
			if(j!=i)
			{
				if(a[i][1]==a[j][1])
				{
				if(a[i][0]>a[j][0])
				{//cout<<a[i][0]<<" ";
					x=1;}
				else if(a[i][0]<a[j][0])
				{//cout<<a[i][0]<<" ";
					y=1;}
				}
				if(a[i][0]==a[j][0])
				{
				if(a[i][1]>a[j][1])
				{//cout<<a[i][1]<<" ";
					z=1;}
				else if(a[i][1]<a[j][1])
				{//cout<<a[i][1]<<" ";
					zi=1;}
				}
			}
		}
		if(x==1 && y==1 && z==1 && zi==1)
		{
		cntr++;
		x=y=z=zi=0;
		}
		else{x=0;y=0;
			z=0;zi=0;}
	}
	cout<<cntr;	
}
