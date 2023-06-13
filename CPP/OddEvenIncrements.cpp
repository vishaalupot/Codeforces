#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,no,cntr1=0,cntr2=0;
	cin>>n;
	
	while(n--)
	{
		cin>>no;
		int arr[no],flag1=2;
		for(int i=0;i<no;i++)
		{
			cin>>arr[i];
		}
		for(int j=0;j<no;j=j+2)
		{
			if(arr[j]%2==0)
			{
				if(flag1==1)
				{
					cout<<"NO"<<endl;
					cntr1=1;
					break;
				}
				else if(flag1==2)
				{
					flag1=0;
				}
			}
			else if(arr[j]%2!=0)
			{
				if(flag1==0)
				{
					cout<<"NO"<<endl;
					cntr1=1;
					break;
				}
				else if(flag1==2)
				{
					flag1=1;
				}
			}
		}
		int flag2=2;
		
		if(cntr1!=1)
		{
			for(int j=1;j<no;j=j+2)
			{
				if(arr[j]%2==0)
				{
					if(flag2==1)
					{
						cout<<"NO"<<endl;
						cntr2=1;
						break;
					}
					else if(flag2==2)
					{
						flag2=0;
					}
				}
				else if(arr[j]%2!=0)
				{
					if(flag2==0)
					{
						cout<<"NO"<<endl;
						cntr2=1;
						break;
					}
					else if(flag2==2)
					{
						flag2=1;
					}
				}
			}
		 }
		if(cntr2==0 && cntr1==0)
		{
			cout<<"YES"<<endl;
		}
		 
		cntr1=0;cntr2=0;
		
	}
}
