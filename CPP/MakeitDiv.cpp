#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t=0;
	unsigned long long int n=0;
	string mid;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cout<<3;
		}	
		else
		{
			cout<<"1";
			for(int i=0;i<n-2;i++)
			{
				
				 cout<<"0";
			}
			cout<<"5"<<endl;
		}	
	}
}
