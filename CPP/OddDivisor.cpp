#include<iostream>
using namespace std;
int main()
{
	unsigned long long int  n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>a;
	if(a%2!=0)
	{cout<<"YES"<<endl;}
	else if(a%2==0)
	{
		if((a/2)%2!=0 && a>2)
		{
		a=a/2;
		
		cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
}
