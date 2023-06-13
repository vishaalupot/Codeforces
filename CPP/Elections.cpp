#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	long long int n=0,c=0,m=0;
	long long int a[3],b[3];
	cin>>n;
	while(n--)
	{
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+3);
		if((b[2]==b[1])||(b[2]==b[0]))
		{
			c++;
		}
		for(int j=0;j<3;j++)
		{
			if(c>0)
			{
				m=((b[2]+1)-a[j]);
				cout<<m<<" ";
			}
			else
			{

				if(a[j]!=(b[2]))
				{
					m=((b[2]+1)-a[j]);
					cout<<m<<" ";
				}
				else
				{
					cout<<"0"<<" ";
				}
			}
		}
		c=0;
		cout<<endl;
	}
}
