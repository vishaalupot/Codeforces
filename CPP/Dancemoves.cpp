#include <iostream>
using namespace std;
int main() 
{
	int n,a,b,diff;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a>b)
		{
			cout<<a-b<<endl;
		}
		else
		{
		diff=abs(b-a);
		if(diff%2==0)
		{
			cout<<(diff/2)<<endl;
		}
			else
			{
				cout<<(diff/2)+2<<endl;
			}
		}
	}
	return 0;
}
