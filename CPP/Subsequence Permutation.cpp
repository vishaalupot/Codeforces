#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n=0,a=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>n;
	for(long int m=0;m<n;m++)
	{
		for(long int j=0;j<n;j++)
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

