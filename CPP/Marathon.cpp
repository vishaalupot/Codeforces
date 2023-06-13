#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c,d;
	cin>>n;
	while(n--)
	{
		int cntr=0;
		
		cin>>a>>b>>c>>d;
		
		if(a<b)
		{˜
			cntr++;
		}
		if(a<c)
		{
			cntr++;
		}
		if(a<d)
		{
			cntr++;
		}
		cout<<cntr<<endl;
	}

}
