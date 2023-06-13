#include<iostream>
using namespace std;
int main()
{
	unsigned long long int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a>=b)
		{
		cout<<b<<endl;
		}
		if(a<b)
		{
		cout<<"1"<<endl;
		}
		
	}
}
