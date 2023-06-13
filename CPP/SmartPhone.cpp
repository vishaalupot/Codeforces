#include<iostream>    
#include<algorithm>
using namespace std;
int main()
{
	long long int n,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	std::sort(a,a+n,greater<int>());
	for(int i=0;i<n;i++)
	{
		if(ans<a[i]*(i+1))
		{
			ans=a[i]*(i+1);
		}
	}
	cout<<ans;
}
