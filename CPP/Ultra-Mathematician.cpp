#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	string a,b;
	cin>>a;
	cin>>b;
	n=a.length();
	int c[n];
	for(int j=0;j<n;j++)
	{
		if(a[j]+b[j]==97)
		{
			c[j]=1;
		}
		else if(a[j]+b[j]==96)
		{
			c[j]=0;
		}
		else
		{
			c[j]=0;
		}
	}
	for(int j=0;j<n;j++)
	{
		cout<<c[j];
	}

}
