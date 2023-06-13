#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a,b,c,max=0;
	
	int d=0;
	
	while(n--)
	{
		cin>>a;
		cin>>b;
		cin>>c;
		
		for(int i=a;i<=b;i++)
		{
			d=floor(i/c)+i%c;
			
			if(d>max)
			{
				max=d;
			}
		}
		cout<<max<<endl;
		max=0;
	}
}
