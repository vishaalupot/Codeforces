#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{	
	int n=0,m=0,ttl=0,l=0,x=0,y=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		//l++;
		cin>>x>>y;
		int a[x];
		for(int j=0;j<=x;j++)
		{
			cin>>a[j];
			sum=sum+a[j];
			//cout<<j<<x;
		}
		sort(a,a+l);
		x=x-1;
		
		if(a[l-1]>y)
		{
			cout<<"1";
		}
		else
		{
		for(int k=x;k>=(0);k--)
		{
			//cout<<k<<" ";
			n=y%a[k]; 
			m=y/a[k];
			//cout<<a[k]<<" ";
			//cout<<" "<<m<<" ";
			if(y<=0)
			{
				cout<<ttl<<endl;
			}
			else
			{
				ttl=ttl+m;
				y=n;
				//cout<<y;
				if(k+1>=(x-2))
				{
					k=x;
				}
			}
		}
		//ttl=0;
		}

}
}
