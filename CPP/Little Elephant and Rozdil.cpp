#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n,temp=0,max=1000000000,a;
	int c;
	cin>>n;
	if(n==1)
	{
		cout<<"1";
		exit(0)
	}
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<max)
		{
		max=a;
		temp=i;
		c=0;
		}
		}
		else if(a==max)
		{
		c++;
		}
		
	}
	if(c>0)
	{cout<<"Still Rozdil";}
	else
	{
	cout<<temp+1;
	}
}
