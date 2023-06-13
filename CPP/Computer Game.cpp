#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int a,n,m=0,l=0;
	char d[200];
	string b,c;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>n;
		cin>>c;
		cin>>b;
		for(int j=0;j<n;j++)
		{
			if(c[j]=='0')
			{
				d[j]='1';
				m++;
			}
			else
			{
				d[j]='0';
				l++;
			}
		}
		if(c[0]=='0' && b[n-1]=='0')
		{
			if(d==b || m==n )
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
				cout<<d<<" "<<b;
			}
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}	
