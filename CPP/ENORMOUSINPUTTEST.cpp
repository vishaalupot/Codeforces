#include <iostream>
using namespace std;
int main()
{
		long long int n,k,c=0;
		long long int a;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a%k==0)
			{
				c++;
			}
		}
		cout<<c;
}
