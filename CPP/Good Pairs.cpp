#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,no;
	cin>>n;
	
	while(n--)
	{
		cin>>no;
		int a[no];
		for(int i=0;i<no;i++)
		{
			cin>>a[i];
		}
		int flag=0;
		for(int j=0;j<no;j++)
		{
			for(int k=0;k<no;k++)
			{
				if(a[k]==j)
				{
					cout<<k<<" "<<
					k+1<<endl;
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				break;
			}
		}
	}
}
