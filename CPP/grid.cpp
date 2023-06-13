#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>n;
	for(int m=0;m<n;m++)
	{
		for(int j=0;j<n;j++)
		{
			if(m==j && n!=2)
			{
			cout<<"-1";
			}
			else if(m!=j && n!=2)
			{
			cout<<"1";
			}
			else
			{
				cout<<"-1";
			}
		}
		cout<<endl;
	
	}
	}
}
