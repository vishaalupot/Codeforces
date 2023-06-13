#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cntr=0,sum=0,no;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int k=0;k<n;k++)
	{
		cntr=1;
		for(int j=k+1;j<n;j++)
		{
			
			if((a[k]==a[j]) && a[j]!=0)
			{
				a[j]=0;
				cntr++;
			}
		}
		sum=sum+cntr/2;
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}*/
	
	cout<<sum;
	
}
