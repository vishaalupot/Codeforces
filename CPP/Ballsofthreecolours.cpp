#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,a[3];
	cin>>n;
	while(n--)
	{
		for(int i=0;i<3;i++)
		{
			cin>>a[i];
		}
		sort(a,a+3);
		if(abs(a[0]-a[1])==1 && abs(a[1]-a[2])==1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<a[2]<<endl;
		}
	}
	
}
