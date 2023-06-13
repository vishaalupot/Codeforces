#include <iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		if(x==y)
		{
			cout<<x<<" "<<y<<endl;
		}
		else if(x*2<=y )
		{
			cout<<x<<" "<<2*x<<endl;
		}
		else
		{
		cout<<"-1 -1"<<endl;
		}
	}
}
