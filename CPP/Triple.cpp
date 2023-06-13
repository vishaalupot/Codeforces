#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		int arr[a];
		for(int i=0;i<a;i++)
		{
			cin>>arr[i];
		}
		int flag=1;
		for(int i=0;i<a;i++)
		{
			for(int j=i+1;j<a;j++)
			{
				if(arr[i]==arr[j])
				{
					flag++;
				}
				if(flag==3)
				{
					cout<<arr[i]<<endl;
					break;
				}
			}
			if(flag==3)
			{
				break;
			}	
			flag=1;		
		}
			if(flag<3)
			{
				cout<<"-1"<<endl;
				flag=1;
			}	
			else
			{
				flag=1;
			}
	}
}
