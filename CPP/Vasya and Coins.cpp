#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	while(n--)
	{
		cin>>a>>b;
		
		if(a==0)
		{
			cout<<1<<endl;
		}
		else if(b==0)
		{
			cout<<a+1<<endl;
		}
		else
		{
			cout<<2*b+a+1<<endl;
		}
		
	}
}
