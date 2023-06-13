#include<iostream>
using namespace std;
int main()
{
	int t,n,m,k,a[1000],z=0,j,c=0,v=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		j=0;c=0;z=0;v=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				c++;
			}
			else if(v==0 && a[i]==0)
			{
				z=i+1;
				v=z;
			}
		}
		if(c==n)
		{
			cout<<"100"<<endl;
		}
		else if(v<=m)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<k<<endl;
		}
	}
}
