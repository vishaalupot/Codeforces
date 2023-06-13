#include <iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i];
			if(a[i]==7)
			{
				flag=-1;
			}
		}
		if(flag==-1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		flag=0;
	}
}
