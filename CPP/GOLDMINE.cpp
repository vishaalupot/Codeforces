#include<iostream>
using namespace std;
int main()
{
	int n=0,a=0,b=0,c=0,d=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		d=a+1;
		if((d)*c>=b)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
