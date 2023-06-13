#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,l,cntr1=0,cntr2=0;
	cin>>n;
	
	string no;
	
	while(n--)
	{

		cin>>l;
		cin>>no;
		
		for(int i=0;i<l;i++)
		{
			if(no[i]=='1')
			{
				cntr1++;
			}
			else
			{
				cntr2++;
			}
		}
		if(cntr1==0 or cntr2==0)
		{
			cout<<1<<endl;
		}
		else if(cntr1==cntr2)
		{
			cout<<cntr1+cntr2<<endl;
		}
		else if(cntr1>cntr2)
		{
			cout<<cntr2+(cntr2+1)<<endl;
		}
		else
		{
			cout<<cntr2+(cntr2+1)<<endl;
		}
		cntr1=0;
		cntr2=0;
		
	}
}
