#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n,l=0;
	cin>>n;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		int b=a;
		int ar[a];
		int arr[1000];
		int c=0;
		for(int i=0;i<a;i++)
		{
			cin>>ar[i];
		}
		for(int i=0;i<a;i++)
		{
			for(int j=i+1;j<a;j++)
			{
				if(ar[i]>0)
				{
				if(ar[i]==ar[j])
				{
					c++;
				}
				}
				
			}
			arr[l]=c;
			l++;
		}
		sort(arr,arr+l);
		if(arr[l-1]==0)
		{
			cout<<1<<endl;
			cout<<a;
		}
		else
		{
		cout<<arr[l-1];
		}
		
	}
}
