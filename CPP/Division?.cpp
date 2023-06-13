#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,no;
	cin>>n;
	
	while(n--)
	{
		cin>>no;
		if(no>=1900)
		{
			cout<<"Division 1"<<endl;
		}
		else if(1600<=no && no<=1899)
		{
			cout<<"Division 2"<<endl;
		}
		else if(1400<=no && no<=1599)
		{
			cout<<"Division 3"<<endl;
		}
		else
		{
			cout<<"Division 4"<<endl;
		}
	}
}
